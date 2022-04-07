/*
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

// ������
// ������ �׵θ��� �����Ͽ� ������ ��ī�Ӱ� ���̰� �ϴ� �� (���� ���� + ���� ����)
int main() {
	uchar dataA[] = { 1, 1, 1, 1, 1, 1,
					1, 1, 1, 1, 1, 1,
					1, 1, 9, 9, 1, 1,
					1, 1, 9, 9, 1, 1,
					1, 1, 1, 1, 1, 1,
					1, 1, 1, 1, 1, 1 };
	Mat A(6, 6, CV_8U, dataA);

	int dx = 1, dy = 0;
	int ksize = 3;
	Mat kx, ky;
	// getDerivKernels
	// ���󿡼� �̺��� ����ϱ� ���� 1���� ���� ���͸� ��ȯ�Ѵ�. kx, ky�� dx, dy�� �̺� ���Ͱ���� ���� �Ű�������.
	// ksize�� Ŀ���� ũ��ν�, k=CV_SCHARR(-1)�̸� Scharr 3*3 Ŀ���� �����ȴ�. k = 1, 3, 5, 7 ���� Ȧ����� Sobel Ŀ���� �����ȴ�.
	// sepFilter2D ���� ������ ���͸� ����Ͽ� ���͸��ϸ�, 2D ���ʹ� ky * kx.t()�� ���� �� �ִ�.
	getDerivKernels(kx, ky, dx, dy, ksize);
	cout << "kx = " << kx << endl;
	cout << "ky = " << ky << endl;

	Mat kxy = ky * kx.t();
	cout << "kxy = " << kxy << endl;

	int ddepth = CV_16S;
	Mat dst1;
	sepFilter2D(A, dst1, ddepth, kx, ky);
	cout << "dst1 = " << dst1 << endl;

	Mat dst2;
	filter2D(A, dst2, ddepth, kxy);
	cout << "dst2 = " << dst2 << endl;

	// Sobel (����Ʈ ��� ó�� ��� = BORDOR_REFLECT101)
	// �Է¿��� ���� Sobel �̺��� �����Ͽ� ��¿����� �����. ddepth = -1�̸� ����� ���°� �����ϴ�.
	Mat dst3;
	Sobel(A, dst3, ddepth, dx, dy, ksize);
	cout << "dst3 = " << dst3 << endl;

	Mat dst4;
	Sobel(A, dst4, ddepth, dx, dy, -1); // CV_SCHARR
	cout << "dst4 = " << dst4 << endl;

	// Scharr
	// �Է¿��� Scharr �����ڸ� �����Ͽ� X�� Y�� ���������� �̺��� �����ؼ� ��¿����� �����.
	// scale�� ���� �����ϸ��� delta�� ���� ������ ����Ͽ� ��¿����� �����.
	// Sobel �Լ����� ksize = -1�� ���͸� �� �Ͱ� ����� �����ϴ�.
	Mat dst5;
	Scharr(A, dst5, ddepth, dx, dy);
	cout << "dst5 = " << dst5 << endl;

	return 0;
}
*/