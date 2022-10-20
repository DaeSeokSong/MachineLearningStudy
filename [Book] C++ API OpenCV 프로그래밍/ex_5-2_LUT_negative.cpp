/*
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {
	Mat srcImg = imread("D:/example/dataset/lena_color.png", IMREAD_GRAYSCALE);
	if (srcImg.empty()) return -1;

	Mat_<uchar> lut(1, 256);	// 1* 256 ũ���� Mat ���
	for (int i = 0; i < 256; i++) lut(i) = 256 - i;

	Mat_<uchar> dstImg;
	LUT(srcImg, lut, dstImg);	// src�� lut ��� ����

	imshow("srcImg", srcImg);
	imshow("dstImg", dstImg);
	waitKey(0);

	return 0;
}
*/