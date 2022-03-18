/*
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;

int main() {
	const int n_mat_size = 5;
	const int n_mat_sz[] = { n_mat_size , n_mat_size , n_mat_size };
	// 3������ �迭 ����
	cv::Mat n_mat(3, n_mat_sz, CV_32FC1);

	cv::RNG rng;
	// 0.0 ~ 1.0 ���� ������ �ε� �Ҽ��� �� 125���� �迭 ä���.
	rng.fill(n_mat, cv::RNG::UNIFORM, 0.f, 1.f);

	const cv::Mat* arr[] = { &n_mat, 0 };
	cv::Mat my_planes[1];

	// ��������
	// 1. cv::Mat�� ��� ��ҿ� ���� C��Ÿ�� �迭 ������(0�̳� NULL�� ������ �Ѵ�.)
	// 2. �迭�� �� ����� �ݺ��� �� �����ϴ� �� �ٸ� cv::Mat�� C ��Ÿ�� �迭
	cv::NAryMatIterator it(arr, my_planes); // �迭�� �����ϴ� �� ����� �ݺ��� �� �ִ�.

	// it.planes[i]�� 'arr'�� i��° �迭�� ���� ����� �ȴ�.
	float s = 0.f;
	int n = 0;
	// ����� ���� = it.nplanes
	// NAryMatIterator�� ���� �����ϴ� �迭�� ��� ����� ������ �ִ�.
	for (int p = 0; p < it.nplanes; p++, ++it) {
		s += cv::sum(it.planes[0])[0];
		n++;
	}
}
*/