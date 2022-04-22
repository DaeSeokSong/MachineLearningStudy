/*
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
	Mat srcImg = imread("D:\\example\\dataset\\life\\book.png", IMREAD_GRAYSCALE);
	if (srcImg.empty()) return -1;

	// cornerMinEigenVal
	// ���� ä�� 8��Ʈ �Ǵ� �Ǽ� �Է� ���󿡼� �ڳ��� ������ ���� ���� ����� �������� ���� ���͸�
	// CV_32FC6 �ڷ����� dst�� ����Ѵ�. Sobel Ŀ��(����)�� ����.
	// cornerEigenValsAndVecs�� ���������� �ּ� ���������� dst�� �����Ѵ�.
	// ���� ���� ���� �Ӱ谪���� ū ȭ�Ұ� �ڳ����� �ȴ�.
	int blockSize = 5;
	int ksize = 3;
	Mat eigenVal;
	cornerMinEigenVal(srcImg, eigenVal, blockSize, ksize);

	Mat dstImg(srcImg.size(), CV_8UC3);
	cvtColor(srcImg, dstImg, COLOR_GRAY2BGR);

	float eval;
	for (int y = 0; y < eigenVal.rows; y++)
	{
		for (int x = 0; x < eigenVal.cols; x++)
		{
			eval = eigenVal.at<float>(y, x);

			if (eval > 0.2) // corner points
			{
				circle(dstImg, Point(x, y), 5, Scalar(0, 255, 0), 2);
			}
		}
	}
	imshow("dstImg", dstImg);

	waitKey(0);
	return 0;
}
*/