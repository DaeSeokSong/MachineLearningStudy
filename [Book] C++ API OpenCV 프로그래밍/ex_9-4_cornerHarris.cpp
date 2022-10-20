/*
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

vector<Point> FindLocalMaxima(Mat& src);

int main()
{
	Mat srcImg = imread("D:\\example\\dataset\\life\\book.png", IMREAD_GRAYSCALE);
	if (srcImg.empty()) return -1;

	int blockSize = 5;
	int ksize = 3;
	double k = 0.01;

	// cornerHarris
	// ���� ä�� 8��Ʈ �Ǵ� �Ǽ� �Է� ���󿡼� Harris �ڳ� ���� �������� ����
	// CV_32FC1 �ڷ����� dst�� ����Ѵ�. Sobel Ŀ��(����)�� ����Ѵ�.
	// k�� Harris �ڳ� ���� �����, �������� ��� dst���� ���� �ش밪�� �ڳ����� �ȴ�.
	// �Ӱ谪�� �����Ͽ� �ʹ� ���� �ڳ����� ������ �� �����Ѵ�.
	Mat R;
	cornerHarris(srcImg, R, blockSize, ksize, k);
	threshold(R, R, 0.01, 0, THRESH_TOZERO);

	vector<Point> cornerPoints = FindLocalMaxima(R);
	Mat dstImg(srcImg.size(), CV_8UC3);
	cvtColor(srcImg, dstImg, COLOR_GRAY2BGR);

	vector<Point>::const_iterator it;
	for (it = cornerPoints.begin(); it != cornerPoints.end(); ++it)
	{
		circle(dstImg, *it, 5, Scalar(255, 0, 255), 2);
		int x = (*it).x;
		int y = (*it).y;
		float fValue = R.at<float>(y, x);
	}
	imshow("dstImg", dstImg);

	waitKey(0);
	return 0;
}

vector<Point> FindLocalMaxima(Mat& src)
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

	vector<Point> points;
	for (int y = 0; y < localMax.rows; y++)
	{
		for (int x = 0; x < localMax.cols; x++)
		{
			uchar uValue = localMax.at<uchar>(y, x);
			if (uValue) points.push_back(Point(x, y));
		}
	}

	return points;
}
*/