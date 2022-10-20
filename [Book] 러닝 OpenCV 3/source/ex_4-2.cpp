/*
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;

int main() {
	const int n_mat_size = 5;
	const int n_mat_sz[] = { n_mat_size , n_mat_size , n_mat_size };
	// 3������ �迭 ����
	cv::Mat n_mat0(3, n_mat_sz, CV_32FC1);
	cv::Mat n_mat1(3, n_mat_sz, CV_32FC1);

	// 0.0 ~ 1.0 ���� ������ �ε� �Ҽ��� �� 125���� �迭 ä���.
	cv::RNG rng;
	rng.fill(n_mat0, cv::RNG::UNIFORM, 0.f, 1.f);
	rng.fill(n_mat1, cv::RNG::UNIFORM, 0.f, 1.f);

	const cv::Mat* arr[] = { &n_mat0, &n_mat1, 0 };
	cv::Mat my_planes[2];

	// ��������
	// 1. cv::Mat�� ��� ��ҿ� ���� C��Ÿ�� �迭 ������(0�̳� NULL�� ������ �Ѵ�.)
	// 2. �迭�� �� ����� �ݺ��� �� �����ϴ� �� �ٸ� cv::Mat�� C ��Ÿ�� �迭
	// �迭�� �����ϴ� �� ����� �ݺ��� �� �ִ�.
	// planes[0] = n_mat0�� ��� ������, planes[1] = n_mat1�� ��� ������
	cv::NAryMatIterator it(arr, my_planes);

	float s = 0.f; // �� �迭�� ��� ��鿡 ���� �հ�
	int n = 0; // �� ����� ��

	// �� ���� ����� �ջ��ؼ� �� ���� ������Ų��.
	// it.size = ����� ũ��(����� �� O, ä���� �� X), Ex. nplanes = 4, size = 16
	for (int p = 0; p < it.nplanes; p++, ++it) {
		s += cv::sum(it.planes[0])[0];
		s += cv::sum(it.planes[1])[0];
		n++;
	}

	cout << "n_mat0.flags = " << n_mat0.flags << endl;
	cout << "n_mat0.dims = " << n_mat0.dims << endl;
	cout << "n_mat0.size = " << n_mat0.size << endl; // ����� ũ��
	cout << "n_mat0.rows = " << n_mat0.rows << endl;
	cout << "n_mat0.cols = " << n_mat0.cols << endl;
	cout << '\n';

	cout << "n_mat1.flags = " << n_mat1.flags << endl;
	cout << "n_mat1.dims = " << n_mat1.dims << endl;
	cout << "n_mat1.size = " << n_mat1.size << endl;
	cout << "n_mat1.rows = " << n_mat1.rows << endl;
	cout << "n_mat1.cols = " << n_mat1.cols << endl;
	cout << '\n';

	cout << "s(�� �迭�� ��� ��鿡 ���� �հ�) = " << s << endl;
	cout << "n(�� ����� ��) = " << n << endl;
}*/