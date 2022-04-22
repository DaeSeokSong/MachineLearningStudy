#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

vector<Point2f> FindLocalMaxima(Mat& src);

int main()
{
	Mat srcImg = imread("D:\\example\\dataset\\life\\bookcover.png", IMREAD_GRAYSCALE);
	if (srcImg.empty()) return -1;

	int blockSize = 5;
	int ksize = 3;
	double k = 0.01;

	Mat R;
	cornerHarris(srcImg, R, blockSize, ksize, k);
	threshold(R, R, 0.01, 0, THRESH_TOZERO);

	vector<Point2f> cornerPoints = FindLocalMaxima(R);

	// cornerSubPix
	// �Է¿��󿡼� ����� �ڳ����� �Է����� �Ͽ�, �ڳ����� ��ġ�� �����ȼ�(��ȭ��) ������ ����Ͽ� �ٽ� �ڳʸ� �����Ͽ� ��ȯ�Ѵ�.
	// ��, ��ȭ�� ������ �ڳ����� �����ϴ� �Լ��̴�.
	// winSize�� Ž�� ������ ũ��, (3*3 -> (3*2 + 1) * (3*2 + 1)�� Ž�� ����,
	// zeroSize�� winSize ���� ������ �ش� ������ ����ũ ó���Ͽ� Ž�� �������� ������� �ʴ´�.
	Size winSize(3, 3);
	Size zeroSize(-1, -1);
	TermCriteria criteria(TermCriteria::COUNT + TermCriteria::EPS, 10, 0.01);
	cornerSubPix(srcImg, cornerPoints, winSize, zeroSize, criteria);

	Mat dstImg(srcImg.size(), CV_8UC3);
	cvtColor(srcImg, dstImg, COLOR_GRAY2BGR);

	vector<Point2f>::const_iterator it;
	for (it = cornerPoints.begin(); it != cornerPoints.end(); ++it)
	{
		circle(dstImg, *it, 5, Scalar(127, 0, 127), 2);
		int x = (*it).x;
		int y = (*it).y;
		float fValue = R.at<float>(y, x);
	}
	imshow("dstImg", dstImg);

	waitKey(0);
	return 0;
}

vector<Point2f> FindLocalMaxima(Mat& src)
{
	Mat dilated;
	Mat localMax;
	Size size(11, 11);
	Mat rectKernel = getStructuringElement(MORPH_RECT, size);

	dilate(src, dilated, rectKernel);
	localMax = (src == dilated);

	Mat eroded;
	Mat localMin;

	erode(src, eroded, rectKernel);
	localMin = (src > eroded);

	localMax = (localMax & localMin);

	vector<Point2f> points;
	for (int y = 0; y < localMax.rows; y++)
	{
		for (int x = 0; x < localMax.cols; x++)
		{
			uchar uValue = localMax.at<uchar>(y, x);
			if (uValue) points.push_back(Point2f(x, y));
		}
	}

	return points;
}