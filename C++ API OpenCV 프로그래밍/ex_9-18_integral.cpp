/*
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
	Mat srcImg = imread("D:\\example\\dataset\\momentTest.png");
	if (srcImg.empty()) return -1;
	else srcImg.convertTo(srcImg, CV_32F);

	// integral
	// CV_8U, CV_32F, CV_64F �Ǽ� ������ �Է��� �޾� ���� ������ �����.
	// ���� ������ ����ϸ� �簢 ������ �հ�, ���, ǥ������ ���� ������ ����� �� �ִ�.
	// �׷��⿡ Haar-like Ư¡, SURF ��� ����Ѵ�.
	Mat sumImg, sqsumImg, tiltedSumImg;
	integral(srcImg, sumImg, sqsumImg, tiltedSumImg);

	imshow("srcImg", srcImg);
	imshow("sumImg", sumImg);
	imshow("sqsumImg", sqsumImg);
	imshow("tiltedSumImg", tiltedSumImg);

	waitKey(0);
	return 0;
}
*/