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

	int ksize = 3;
	double sigma = 0.0;
	// getGaussianKernel
	// ksize * 1�� 1���� ����þ� Ŀ���� ��ķ� ��ȯ�Ѵ�. ksize�� Ȧ������ �Ѵ�. sigma�� ǥ�� �����̴�.
	// sigma <= �� ���, simga = 0.3*((ksize-1)*0.5 - 1) + 0.8 �� ����Ѵ�.
	Mat kx = getGaussianKernel(ksize, sigma);
	cout << "kx = " << kx << endl;
	Mat ky = getGaussianKernel(ksize, sigma);
	cout << "ky = " << ky << endl;
	Mat kxy = ky * kx.t();
	cout << "kxy = " << kxy << endl;
	cout << "sum(kxy) = " << sum(kxy) << endl;

	Mat dst1;
	sepFilter2D(A, dst1, -1, kx, ky);
	cout << "dst1 = " << dst1 << endl;

	Mat dst2;
	filter2D(A, dst2, -1, kxy);
	cout << "dst2 = " << dst2 << endl;

	// GaussianBlur (�е� ��� = BORDER_REPLICATE101)
	// ksize ũ���� 2���� ����þ� Ŀ�ΰ� Convolution�� �����Ѵ�. �� sigma ���� X, Y ������ ���� ����þ� Ŀ�� ǥ�������̴�.
	// sigmaX �� 0�� �� �� ���� sigmaY = 0�̸� SigmaY = sigmaX �̴�.
	Mat dst3;
	GaussianBlur(A, dst3, Size(ksize, ksize), sigma, sigma);
	cout << "dst3 = " << dst3 << endl;

	return 0;
}
*/