/*
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
	Mat srcImg1 = imread("D:\\example\\dataset\\ChessBoard1.jpg", IMREAD_GRAYSCALE);
	Mat srcImg2 = imread("D:\\example\\dataset\\ChessBoard3.jpg", IMREAD_GRAYSCALE);
	if (srcImg1.empty() || srcImg2.empty())
	{
		cout << "���� �ҷ����� ����" << endl;
		return -1;
	}

	//findChessboardCorners
	//ü������ ������ ���� �ڳ����� ��ġ�� ���������� �����Ѵ�.
	//�ڳ����� ��켱 ������ �����ϰ�, ���ʿ��� ���������� �����Ͽ� ��ȯ�Ѵ�.
	//cornerSubPix �Լ��� �߰������� ����ϸ�, ��ȭ�Ҵ����� ��Ȯȯ ��ǥ�� ������ �� �ִ�.
	Size patternsize(5, 5);
	vector<Point2f> corners1;
	bool bfound1 = findChessboardCorners(srcImg1, patternsize, corners1);
	vector<Point2f> corners2;
	bool bfound2 = findChessboardCorners(srcImg2, patternsize, corners2);

	//drawChessboardCorners
	//findChessboardCorners �Լ��� ���� ����� �ڳ��� ���͸� ���� ǥ���Ѵ�.
	Mat dstImg1;
	cvtColor(srcImg1, dstImg1, COLOR_GRAY2BGR);
	drawChessboardCorners(dstImg1, patternsize, corners1, bfound1);
	imshow("dstImg1", dstImg1);
	waitKey(0);

	Mat dstImg2;
	cvtColor(srcImg2, dstImg2, COLOR_GRAY2BGR);
	drawChessboardCorners(dstImg2, patternsize, corners2, bfound2);
	imshow("dstImg2", dstImg2);
	waitKey(0);

	Mat M = findHomography(corners1, corners2, RANSAC);

	vector<Point2f> dstCorners;
	perspectiveTransform(corners1, dstCorners, M);
	for (int i = 0; i < dstCorners.size(); i++)
	{
		circle(dstImg2, dstCorners[i], 5, Scalar(255, 255, 0), -1);
	}
	imshow("dstImg2", dstImg2);
	waitKey(0);

	return 0;
}
*/