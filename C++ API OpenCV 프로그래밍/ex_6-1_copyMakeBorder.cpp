/*
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {
	uchar dataA[] = { 1, 2, 4, 5, 2, 1,
					3, 6, 6, 9, 0, 3,
					1, 8, 3, 7, 2, 5,
					2, 9, 8, 9, 9, 1,
					3, 9, 8, 8, 7, 2,
					4, 9, 9, 9, 9, 3 };
	Mat A(Size(6, 6), CV_8U, dataA);
	cout << "A = " << A << endl;

	int border = 2;

	// BORDER_CONSTANT, 0-padding
	Mat B;
	copyMakeBorder(A, B, border, border, border, border, BORDER_CONSTANT, 0);
	cout << "B = " << B << endl;

	// BORDER_REPLICATE, �����¿� �� ������ �е�
	Mat C;
	copyMakeBorder(A, C, border, border, border, border, BORDER_REPLICATE);
	cout << "C = " << C << endl;

	// BORDER_REFLECT, �ſ� �ݻ縦 �̿��� �е�
	Mat D;
	copyMakeBorder(A, D, border, border, border, border, BORDER_REFLECT);
	cout << "D = " << D << endl;

	// BORDER_REFLECT101, BORDER_REFLECT���� ���� ����� �� ������ �����ϰ� �е�
	Mat E;
	copyMakeBorder(A, E, border, border, border, border, BORDER_REFLECT101);
	cout << "E = " << E << endl;

	// BORDER_WRAP, border ��ŭ ���ݴ� ���� �̿��Ͽ� �е�
	Mat F;
	copyMakeBorder(A, F, border, border, border, border, BORDER_WRAP);
	cout << "F = " << F << endl;

	return 0;
}
*/