/*
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {
	Mat srcImg = imread("D:/example/dataset/lena_color.png", IMREAD_GRAYSCALE);
	if (srcImg.empty()) return -1;

	Mat_<uchar> img(srcImg);
	Mat_<uchar> dstImg(srcImg.size());

	for (int x = 0; x < img.rows; x++) {
		for (int y = 0; y < img.cols; y++) {
			uchar r = img(x, y);
			// �Է¿����� ��� �ִ밪���� ȭ���� ��Ⱚ�� �� ������ ȭ�Ҹ� �缳��
			dstImg(x, y) = 255 - r;
		}
	}

	imshow("srcImg", srcImg);
	imshow("dstImg", dstImg);
	waitKey(0);
	return 0;
}
*/