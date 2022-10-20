/*
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

// ������׷�, ���� �������� �󵵼��� ����׷����� ǥ���� ��, �������� Ȯ���е� �Լ��� ������ �� �ִ�.
// ������ Ex1. �Ǻ� ������ ������׷��� ����� �� �������ϸ�, �� / �� ���� ������ ������ �� �ִ�.
// ������ Ex2. ��ü ������ ������ ��ü�� ���ɿ��� �����ϰ� �÷� ����(Hue)�� ������׷����� ����ϰ�, ���� ������׷��� ������ �������ϰ� ����ȭ(�Ӱ�ġ)�ϸ� �÷������� ����� ������ ���� �����ϴ�.
// findContours �Լ��� ��ü�� ��� �����ϰ�, ��ü ���� ����� meanShift�� CamShift���� �������� ����Ѵ�.
int main() {
	Mat srcImg = imread("D:/example/dataset/lena_color.png");
	if (srcImg.empty()) return -1;

	Mat hsvImg;
	cvtColor(srcImg, hsvImg, COLOR_BGR2HSV);
	vector<Mat> planes;
	split(hsvImg, planes);
	Mat hueImg = planes[0];

	Rect roi(100, 400, 100, 100);
	rectangle(srcImg, roi, Scalar(0, 0, 255), 2);
	Mat roiImg = hueImg(roi);

	int histSize = 256;
	float hValue[] = { 0, 256 };
	const float* ranges[] = { hValue };
	int channels = 0;
	int dims = 1;

	Mat hist;
	calcHist(&roiImg, 1, &channels, Mat(), hist, dims, &histSize, ranges);

	Mat hueImg2;
	hueImg.convertTo(hueImg2, CV_32F);

	Mat backProject;
	calcBackProject(&hueImg2, 1, &channels, hist, backProject, ranges);

	double minVal, maxVal;
	minMaxLoc(backProject, &minVal, &maxVal);

	Mat backProject2;
	normalize(backProject, backProject2, 0, 255, NORM_MINMAX, CV_8U);

	imshow("backProject2", backProject2);
	imshow("srcImg", srcImg);

	waitKey(0);

	return 0;
}
*/