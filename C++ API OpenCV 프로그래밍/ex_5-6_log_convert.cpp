/*
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {
	Mat srcImg = imread("D:/example/dataset/lena_color.png", IMREAD_GRAYSCALE);
	if (srcImg.empty()) return -1;

	Mat fImg;
	srcImg.convertTo(fImg, CV_32F);	// �ڷ��� ��ȯ 8U -> 32F
	add(fImg, Scalar(1), fImg);

	// �Է°� r�� ���� log ���� ��¿��� ����, log(1+|r|), �Է°��� ������ ���� �� ȿ�����̴�.
	Mat logImg;
	log(fImg, logImg);

	double minVal, maxVal;
	minMaxLoc(logImg, &minVal, &maxVal);
	cout << "Before normalizing in logImg" << endl;
	cout << "minVal = " << minVal << endl;
	cout << "maxVal = " << maxVal << endl;

	normalize(logImg, logImg, 0, 1.0, NORM_MINMAX);	// ������ ȭ�Ұ��� [0, 1] ������ ����ȭ
	minMaxLoc(logImg, &minVal, &maxVal);
	cout << "After normalizing in logImg" << endl;
	cout << "minVal = " << minVal << endl;
	cout << "maxVal = " << maxVal << endl;

	imshow("srcImg", srcImg);
	imshow("logImg", logImg);
	waitKey(0);

	return 0;
}
*/