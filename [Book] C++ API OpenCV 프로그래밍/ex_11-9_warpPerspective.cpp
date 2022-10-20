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

	Size patternsize(5, 5);
	TermCriteria criteria = TermCriteria(TermCriteria::COUNT + TermCriteria::EPS, 30, 0.1);

	vector<Point2f> corners1;
	bool bfound1 = findChessboardCorners(srcImg1, patternsize, corners1);
	if (bfound1) cornerSubPix(srcImg1, corners1, Size(5, 5), Size(-1, -1), criteria);

	vector<Point2f> corners2;
	bool bfound2 = findChessboardCorners(srcImg2, patternsize, corners2);
	if (bfound2) cornerSubPix(srcImg2, corners2, Size(5, 5), Size(-1, -1), criteria);

	Mat dstImg1;
	cvtColor(srcImg1, dstImg1, COLOR_GRAY2BGR);
	drawChessboardCorners(dstImg1, patternsize, corners1, bfound1);
	imshow("dstImg1", dstImg1);

	Mat dstImg2;
	cvtColor(srcImg2, dstImg2, COLOR_GRAY2BGR);
	drawChessboardCorners(dstImg2, patternsize, corners2, bfound2);
	imshow("dstImg2", dstImg2);

	Mat M = findHomography(corners1, corners2, RANSAC);

	//warpPerspective
	//�Է� ���� 3*3 ���� ��ȯ ����� �����Ͽ� ��� ������ ��ȯ�Ѵ�.
	//flag�� �������� ���� �� �ִ�.
	//borderMode�� ��谪 ó�� ����� ���� �� �ִ�.
	Mat srcImg3;
	warpPerspective(srcImg1, srcImg3, M, srcImg1.size());

	Mat dstImg3;
	cvtColor(srcImg3, dstImg3, COLOR_GRAY2BGR);
	drawChessboardCorners(dstImg3, patternsize, corners2, bfound2);
	imshow("dstImg3", dstImg3);
	waitKey(0);

	return 0;
}
*/