/*
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
	Mat srcImg = imread("D:\\example\\dataset\\life\\book.png", IMREAD_GRAYSCALE);
	if (srcImg.empty()) return -1;

	// cornerEigenValsAndVecs
	// ���� ä�� 8��Ʈ �Ǵ� �Ǽ� �Է� ���󿡼� �ڳ��� ������ ���� ���� ����� �������� ���� ���͸�
	// CV_32FC6 �ڷ����� dst�� ����Ѵ�. Sobel Ŀ��(����)�� ����.
	int blockSize = 5;
	int ksize = 3;
	Mat cornerMap;
	cornerEigenValsAndVecs(srcImg, cornerMap, blockSize, ksize);

	Mat dstImg(srcImg.size(), CV_8UC3);
	cvtColor(srcImg, dstImg, COLOR_GRAY2BGR);

	Vec6f element;
	for (int y = 0; y < cornerMap.rows; y++)
	{
		for (int x = 0; x < cornerMap.cols; x++)
		{
			element = cornerMap.at<Vec6f>(y, x);

			if (element[0] > 0.2 && element[1] > 0.2) // corner points
			{
				circle(dstImg, Point(x, y), 5, Scalar(0, 0, 255), 2);
			}

			if (element[0] > 0.2) // edges
			{
				circle(dstImg, Point(x, y), 1, Scalar(255, 0, 0), 1);
			}
		}
	}
	imshow("dstImg", dstImg);

	waitKey(0);
	return 0;
}
*/