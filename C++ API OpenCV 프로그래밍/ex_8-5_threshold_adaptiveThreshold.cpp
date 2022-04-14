/*
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {
	Mat srcImg = imread("D:\\example\\dataset\\lena_color.png", IMREAD_GRAYSCALE);
	if (srcImg.empty()) return -1;

	GaussianBlur(srcImg, srcImg, Size(7, 7), 0, 0);
	imshow("srcImg + GaussianBlur", srcImg);

	Mat dstImg1;
	double th1 = threshold(srcImg, dstImg1, 128, 255, THRESH_BINARY_INV + THRESH_OTSU);

	// �� ȭ�Ҹ��� ���������� �Ӱ谪�� �������� (�ִ� �Ӱ谪�� ���ϸ� ��),
	// blocksize�� ũ�� ������ ���ΰ� ä������.
	Mat dstImg2;
	adaptiveThreshold(srcImg, dstImg2, 255, ADAPTIVE_THRESH_MEAN_C, THRESH_BINARY_INV, 71, 5);

	Mat dstImg3;
	adaptiveThreshold(srcImg, dstImg3, 255, ADAPTIVE_THRESH_GAUSSIAN_C, THRESH_BINARY_INV, 71, 5);

	imshow("THRESH_OTSU", dstImg1);
	imshow("ADAPTIVE_THRESH_MEAN_C", dstImg2);
	imshow("ADAPTIVE_THRESH_GAUSSIAN_C", dstImg3);

	waitKey(0);
	return 0;
}
*/