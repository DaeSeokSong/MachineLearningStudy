/*
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

// ���� ��ȯ(Hough transform)
// �������� ���� �Ǵ� ���� �������� �Ķ���͸� ������ �� �ִ�.
int main() {
	Mat srcImg = imread("D:\\example\\dataset\\line.png", IMREAD_GRAYSCALE);
	if (srcImg.empty()) return -1;

	Mat edges;
	Canny(srcImg, edges, 50, 127);
	imshow("edges", edges);

	vector<Vec2f> lines;
	// HoughLines(�Է�, ���, �������κ��� �Ÿ��� ����, x����� ����(����),
	//				�Ӱ谪, rho/srn�� ���� ���� ����, theta/srn�� ���� ���� ����)
	HoughLines(edges, lines, 1, CV_PI / 180.0, 100);

	Mat dstImg(srcImg.size(), CV_8UC3);
	cvtColor(srcImg, dstImg, COLOR_GRAY2BGR);

	Vec2f params;
	float rho, theta;
	float c, s;
	float x0, y0;
	for (int k = 0; k < lines.size(); k++) {
		params = lines[k];

		rho = params[0];
		theta = params[1];

		// drawing a line
		c = cos(theta);
		s = sin(theta);
		x0 = rho * c;
		y0 = rho * s;

		Point pt1, pt2;
		pt1.x = cvRound(x0 + 1000 * (-s));
		pt1.y = cvRound(y0 + 1000 * (c));
		pt2.x = cvRound(x0 - 1000 * (-s));
		pt2.y = cvRound(y0 - 1000 * (c));
		line(dstImg, pt1, pt2, Scalar(0, 0, 255), 2);
	}

	imshow("dstImg", dstImg);

	waitKey(0);
	return 0;
}
*/