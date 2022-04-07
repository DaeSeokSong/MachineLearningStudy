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

	int border = 1;

	// BORDER_CONSTANT, 0-padding
	Mat B;
	copyMakeBorder(A, B, border, border, border, border, BORDER_CONSTANT, 0);
	cout << "B = " << B << endl;

	int ksize = border * 2 + 1;

	// medianBlur (�е� ��� = BORDER_REPLICATE)
	// src���󿡼� ksize * ksize ���� �����츦 �̿��Ͽ� �߰���(�������� �迭���� �� �߰��� ��ġ�� ��)�� ����ؼ� dst�� �����Ѵ�.
	// �ұ�-���� ������(���޽� ������)�� ��� ����, ����þ� ���ͺ��� ȿ�������� ������ �� �ִ�.
	Mat dst1;
	medianBlur(A, dst1, ksize);
	cout << "dst1 = " << dst1 << endl;

	// blur (�е� ��� = BORDER_REPLICATE101)
	// ������ ũ�� ���� ���� ����ȭ�� ����� ���� �ڽ����͸� �̿��Ͽ� �����Ѵ�. (��� ���͸�)
	Mat dst2;
	blur(A, dst2, Size(ksize, ksize));
	cout << "dst2 = " << dst2 << endl;

	return 0;
}
*/