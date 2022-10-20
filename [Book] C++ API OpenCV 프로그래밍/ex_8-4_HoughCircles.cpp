/*
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

// ���� ��ȯ(Hough transform)
// �������� ���� �Ǵ� ���� �������� �Ķ���͸� ������ �� �ִ�.
int main() {
	Mat srcImg = imread("D:\\example\\dataset\\circle.png", IMREAD_GRAYSCALE);
	if (srcImg.empty()) return -1;

	Mat edges;
	Canny(srcImg, edges, 50, 127);
	imshow("edges", edges);

	vector<Vec3f> circles;
	// minDist�� param2 ���� �� �����ؾ� �Ѵ�.
	HoughCircles(srcImg, circles, HOUGH_GRADIENT, 1, 80, 120, 18);

	Mat dstImg(srcImg.size(), CV_8UC3);
	cvtColor(srcImg, dstImg, COLOR_GRAY2BGR);

	Vec3f params;
	int cx, cy, r;
	for (int k = 0; k < circles.size(); k++) {
		params = circles[k];

		cx = cvRound(params[0]);
		cy = cvRound(params[1]);
		r = cvRound(params[2]);

		Point center(cx, cy);
		circle(dstImg, center, r, Scalar(0, 0, 255), 2);
	}
	imshow("dstImg", dstImg);

	waitKey(0);
	return 0;
}

*/