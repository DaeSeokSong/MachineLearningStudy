/*
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

// ��������, Morphology
// �������� ������ ������Ҹ� �̿��Ͽ� �ݺ������� ������ Ȯ����� ������ �κ� �Ǵ� ������ ä��ų�, ������ ����Ͽ� �����ϴ� ���� ��������
// ħ��(erode), ��â(dilate), ����(opening), �ݱ�(closing) ���� �ִ�.
int main() {
	Mat srcImg = imread("D:\\example\\dataset\\morphology.png", IMREAD_GRAYSCALE);
	if (srcImg.empty()) return -1;
	imshow("srcImg", srcImg);

	Size size(5, 5);
	// getStructuringElement
	// �������� ������ ���� ksize ũ���� ��� shape ���� ��Ҹ� ��ȯ�Ѵ�.
	Mat rectKernel = getStructuringElement(MORPH_RECT, size);

	int iterations = 5;
	Point anchor(-1, -1);

	Mat openImg;
	morphologyEx(srcImg, openImg, MORPH_OPEN, rectKernel, anchor, iterations);
	imshow("openImg", openImg);

	Mat closeImg;
	morphologyEx(srcImg, closeImg, MORPH_CLOSE, rectKernel, anchor, iterations);
	imshow("closeImg", closeImg);

	Mat gradientImg;
	morphologyEx(srcImg, gradientImg, MORPH_GRADIENT, rectKernel, anchor, iterations);
	imshow("gradientImg", gradientImg);

	Mat tophatImg;
	morphologyEx(srcImg, tophatImg, MORPH_TOPHAT, rectKernel, anchor, iterations);
	imshow("tophatImg", tophatImg);

	Mat blackhatImg;
	morphologyEx(srcImg, blackhatImg, MORPH_BLACKHAT, rectKernel, anchor, iterations);
	imshow("blackhatImg", blackhatImg);

	waitKey(0);
	return 0;
}
*/