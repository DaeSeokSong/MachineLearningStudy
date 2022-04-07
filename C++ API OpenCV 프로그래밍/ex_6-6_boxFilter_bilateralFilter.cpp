/*
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

// ������, Smoothing
// ������ �ε巴�� �Ѵ�. ����� ���� �� �ִ�.
int main() {
	uchar dataA[] = { 1, 2, 4, 5, 2, 1,
					3, 6, 6, 9, 0, 3,
					1, 8, 3, 7, 2, 5,
					2, 9, 8, 9, 9, 1,
					3, 9, 8, 8, 7, 2,
					4, 9, 9, 9, 9, 3 };
	Mat A(Size(6, 6), CV_8U, dataA);
	cout << "A = " << A << endl;

	int border = 1;

	Mat B;
	copyMakeBorder(A, B, border, border, border, border, BORDER_REFLECT_101);
	cout << "B = " << B << endl;

	Size kSize(border * 2 + 1, border * 2 + 1);
	Point anchor(-1, -1);
	Mat dst1;
	// �̿����� �ջ� ���, ����ȭ X
	boxFilter(A, dst1, -1, kSize, anchor, false);
	cout << "dst1 = " << dst1 << endl;
	Mat dst2;
	// �̿����� �ջ� ���, ����ȭ O
	boxFilter(A, dst2, -1, kSize, anchor, true);
	cout << "dst2 = " << dst2 << endl;

	Mat dst3;
	int d = kSize.width;
	double sigmaColor = 2.0;
	double sigmaSpace = 2.0;
	bilateralFilter(A, dst3, 3, d, sigmaColor, sigmaSpace);
	cout << "dst3 = " << dst3 << endl;

	Mat dst4;
	// d = -1�̸� d�� sigmaSpace�� ���� �����ȴ�.
	bilateralFilter(A, dst4, 3, -1, sigmaColor, sigmaSpace);
	cout << "dst4 = " << dst4 << endl;

	return 0;
}
*/