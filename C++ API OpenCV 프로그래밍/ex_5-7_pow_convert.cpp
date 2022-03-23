/*
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {
	Mat srcImg = imread("D:/example/dataset/lena_color.png", IMREAD_GRAYSCALE);
	if (srcImg.empty()) return -1;

	Mat fImg;
	srcImg.convertTo(fImg, CV_32F);	// �ڷ��� ��ȯ 8U -> 32F

	double power = 0.2;	// �ŵ����� ��(�� ��)
	Mat powImg;
	// ������ ���� ���� �پ��ϰ��Է� ������ ��ȯ��ų �� �ִ�.
	// power�� 1�̸� �Է°� ����� ����, ������ �α׺�ȯ�� ����, ����� ���α� ��ȯ�� �����ϴ�.
	pow(fImg, power, powImg);

	double minVal, maxVal;
	minMaxLoc(powImg, &minVal, &maxVal);
	cout << "Before normalizing in logImg" << endl;
	cout << "minVal = " << minVal << endl;
	cout << "maxVal = " << maxVal << endl;

	normalize(powImg, powImg, 0, 1.0, NORM_MINMAX);	// ������ ȭ�Ұ��� [0, 1] ������ ����ȭ
	minMaxLoc(powImg, &minVal, &maxVal);
	cout << "After normalizing in logImg" << endl;
	cout << "minVal = " << minVal << endl;
	cout << "maxVal = " << maxVal << endl;

	imshow("srcImg", srcImg);
	imshow("powImg", powImg);
	waitKey(0);

	return 0;
}
*/