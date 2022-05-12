/*
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
	Mat srcImg = imread("D:\\example\\dataset\\lena_color.png", IMREAD_GRAYSCALE);
	if (srcImg.empty()) return -1;

	// resize
	// �Է¿����� INTER(interpolation)�� ���õ� ����� ����Ͽ� dsize(��¿��� ũ��)�� ��¿����� �����.
	// fx�� �������� ������, fy�� �������� ������ ũ���̴�.
	Mat dstImg1(320, 240, CV_8U);
	resize(srcImg, dstImg1, dstImg1.size(), 0, 0, INTER_AREA); // ȭ�� �������踦 �̿��� ����ø�, ���� ���
	imshow("dstImg1", dstImg1);

	Mat dstImg2;
	resize(srcImg, dstImg2, Size(), 1.2, 1.4, INTER_LINEAR); // ����� ���� ����, ���� Ȯ��
	imshow("dstImg2", dstImg2);

	// INTER_NEAREST, �ֱ��� �̿�����
	// INTER_CUBIC, 4*4 �̿��� �̿��� ����� 3������, ���� Ȯ��

	waitKey(0);
	return 0;
}
*/