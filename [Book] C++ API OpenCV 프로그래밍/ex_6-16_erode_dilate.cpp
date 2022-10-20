/*
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

// ��������, Morphology
// �������� ������ ������Ҹ� �̿��Ͽ� �ݺ������� ������ Ȯ����� ������ �κ� �Ǵ� ������ ä��ų�,
// ������ ����Ͽ� �����ϴ� ���� �������� ħ��(erode), ��â(dilate), ����(opening), �ݱ�(closing) ���� �ִ�.
int main() {
	Mat srcImg = imread("D:\\example\\dataset\\morphology.png", IMREAD_GRAYSCALE);
	if (srcImg.empty()) return -1;
	imshow("srcImg", srcImg);

	Size size(5, 5);
	// getStructuringElement
	// �������� ������ ���� ksize ũ���� ��� shape ���� ��Ҹ� ��ȯ�Ѵ�.
	Mat rectKernel = getStructuringElement(MORPH_RECT, size);
	int iterations = 3;
	Point anchor(-1, -1);

	Mat erodeImg;
	// erode
	// �Է¿��� �̿��� �����ϴ� ���� ��� kernel�� �����Ͽ� �������� ħ�� ������ iterations ��ŭ �ݺ��Ͽ� ��¿����� �����.
	// kernel=Mat()�̸�, 3*3 �簢�� ���� ��Ҹ� ����Ѵ�. ä���� ���Ѽ��� ������,
	// �׷���-������ ���󿡼��� �ݺ����� min ���͸��� ����. ���� �ؼҰ��� ����� �� �ִ�.
	erode(srcImg, erodeImg, rectKernel, anchor, iterations);
	imshow("erodeImg", erodeImg);
	Mat dilateImg;
	// dilate
	// �Է¿��� �̿��� �����ϴ� ���� ��� kernel�� �����Ͽ� �������� ��â ������ iterations ��ŭ �ݺ��Ͽ� ��¿����� �����.
	// kernel=Mat()�̸�, 3*3 �簢�� ���� ��Ҹ� ����Ѵ�. ä���� ���Ѽ��� ������,
	// �׷���-������ ���󿡼��� �ݺ����� max ���͸��� ����. ���� �ش밪�� ����� �� �ִ�.
	dilate(srcImg, dilateImg, rectKernel, anchor, iterations);
	imshow("dilateImg", dilateImg);

	Mat ellipseKernel = getStructuringElement(MORPH_ELLIPSE, size);

	Mat erodeImg2;
	erode(srcImg, erodeImg2, ellipseKernel, anchor, iterations);
	imshow("erodeImg2", erodeImg2);
	Mat dilateImg2;
	dilate(srcImg, dilateImg2, ellipseKernel, anchor, iterations);
	imshow("dilateImg2", dilateImg2);

	Mat crossKernel = getStructuringElement(MORPH_CROSS, size);

	Mat erodeImg3;
	erode(srcImg, erodeImg3, crossKernel, anchor, iterations);
	imshow("erodeImg3", erodeImg3);
	Mat dilateImg3;
	dilate(srcImg, dilateImg3, crossKernel, anchor, iterations);
	imshow("dilateImg3", dilateImg3);

	waitKey(0);
	return 0;
}
*/