/*
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {
	Mat srcImg = imread("D:/example/dataset/lena_color.png", IMREAD_GRAYSCALE);
	if (srcImg.empty()) return -1;

	double minVal, maxVal;
	Point minLoc, maxLoc;
	minMaxLoc(srcImg, &minVal, &maxVal, &minLoc, &maxLoc);
	cout << "In srcImg" << endl;
	cout << "minVal = " << minVal << endl;
	cout << "maxVal = " << maxVal << endl;
	cout << "minLoc = " << minLoc << endl;
	cout << "maxLoc = " << maxLoc << endl;

	Mat dstImg;
	double scale = 100.0 / (maxVal - minVal);
	// ���� ��ȯ�� �Է¿����� ���� ���Ⱑ scale, y������ shift�� ������ �����Ŀ� ���� ��ȯ�̴�.
	srcImg.convertTo(dstImg, -1, scale, -scale * minVal); // 0~100 ������ ���� ��ȯ
	// normalize(srcImg, dstImg, 0, 100, NORM_MINMAX); 0~100 ������ ���� ��ȯ

	minMaxLoc(dstImg, &minVal, &maxVal, &minLoc, &maxLoc);
	cout << "In dstImg" << endl;
	cout << "minVal = " << minVal << endl;
	cout << "maxVal = " << maxVal << endl;
	cout << "minLoc = " << minLoc << endl;
	cout << "maxLoc = " << maxLoc << endl;

	imshow("srcImg", srcImg);
	imshow("dstImg", dstImg);
	waitKey(0);

	return 0;
}
*/