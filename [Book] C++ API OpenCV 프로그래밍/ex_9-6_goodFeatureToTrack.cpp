/*
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
	Mat srcImg = imread("D:\\example\\dataset\\life\\bookcover.png", IMREAD_GRAYSCALE);
	if (srcImg.empty()) return -1;

	int maxCorners = 8;
	double qualityLevel = 0.001;
	double minDistance = 10;
	int blockSize = 3;
	bool useHarrisDetector = true;
	double k = 0.04;

	// goodFeaturesToTrack
	// 8��Ʈ �Ǵ� 32��Ʈ �Ǽ��� ���� ä�� ���󿡼� �ѷ��� �ڳ����� �����Ѵ�.
	// ��ü�� ����Ʈ ��� �������� �ʱ�ȭ�� �� ����Ѵ�.
	// HarrisDetector�� cornerMinEigenVal �Լ� �Ǵ� cornerMinEigenVal �ϳ����� ����Ͽ� �ڳ��� �������� ����Ѵ�.
	vector<Point> cornerPoints;
	goodFeaturesToTrack(srcImg, cornerPoints, maxCorners, qualityLevel, minDistance, noArray(), blockSize, useHarrisDetector, k); // noArray() == mask

	Mat dstImg(srcImg.size(), CV_8UC3);
	cvtColor(srcImg, dstImg, COLOR_GRAY2BGR);

	vector<Point>::const_iterator it;
	for (it = cornerPoints.begin(); it != cornerPoints.end(); ++it)
	{
		circle(dstImg, *it, 5, Scalar(0, 255, 255), 2);
	}
	imshow("dstImg", dstImg);

	waitKey(0);
	return 0;
}
*/