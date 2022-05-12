/*
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
	Mat srcImg = imread("D:\\example\\dataset\\lena_color.png", IMREAD_GRAYSCALE);
	if (srcImg.empty()) return -1;
	else resize(srcImg, srcImg, Size(512, 512));

	Point2f center(256.0f, 256.0f);
	double angle = -45.0;
	double scale = 1.0;
	Mat rotMat = getRotationMatrix2D(center, angle, scale);

	Point pt1(400, 256);
	Mat A(3, 1, CV_64F);
	A.at<double>(0, 0) = (double)pt1.x;
	A.at<double>(1, 0) = (double)pt1.y;
	A.at<double>(2, 0) = 1.0;
	Mat B = rotMat * A;

	Mat dstImg;
	//warpAffine
	//�Է� ���� 2*3 ������ ��ȯ ����� �����Ͽ� ��¿����� ��ȯ�Ѵ�.
	//flag�� ����� �������� ������ �� �ִ�.
	//borderMode�� ��谪 ó�� ����� ������ �� �ִ�.
	warpAffine(srcImg, dstImg, rotMat, Size(), INTER_LINEAR);

	imshow("dstImg", dstImg);
	waitKey(0);

	Size dsize(800, 800);
	rotMat.at<double>(0, 2) += 150;
	rotMat.at<double>(1, 2) += 150;
	warpAffine(srcImg, dstImg, rotMat, dsize, INTER_LINEAR);

	imshow("dstImg", dstImg);
	waitKey(0);

	return 0;
}
*/