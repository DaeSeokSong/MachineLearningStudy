/*
#include <opencv2/opencv.hpp>

using namespace cv;

void example2_5(const Mat& image) {
	// �Է� �� ��� �̹����� ����� ������ ����
	namedWindow("Example2_5-in", WINDOW_AUTOSIZE);
	namedWindow("Example2_5-out", WINDOW_AUTOSIZE);

	// �Է� �̹����� ����� �����쿡 �̹��� ���
	imshow("Example2_5-in", image);

	// ��� �̹���
	Mat out;
	GaussianBlur(image, out, Size(5, 5), 3, 3);
	GaussianBlur(out, out, Size(5, 5), 3, 3);

	// ��� �̹��� ���
	imshow("Example2_5-out", out);

	waitKey(0);
}

int main() {
	example2_5(imread("D:/example/dataset/DdaBongDoChi.jpg", -1));
}*/