/*
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;

// ���� �Լ� ����, ��� Ÿ���� CV_32F(float)�� �ƴ� ��� ������ ���� �߻�
void print_matrix_origin(const cv::SparseMat* sm) {
	cv::SparseMatConstIterator_<float> it = sm->begin<float>();
	cv::SparseMatConstIterator_<float> it_end = sm->end<float>();

	for (; it != it_end; ++it) {
		const cv::SparseMat::Node* node = it.node();
		printf(" (%3d, %3d) %f\n", node->idx[0], node->idx[1], *it);
	}
}

// ���� �Լ�, � ���������� ��Ŀ� �־����� ������ ���� �߻� X
template <class T> void print_matrix(const cv::SparseMat_<T>* sm) {
	// sm ���� �� �� <>�ȿ� ���������� ����ϰ� �ν��Ͻ�ȭ �����Ƿ�
	// begin()�� end()�� <>�ȿ� �������� ����� �ʿ� ����.
	cv::SparseMatConstIterator_<T> it = sm->begin();
	cv::SparseMatConstIterator_<T> it_end = sm->end();

	for (; it != it_end; ++it) {
		const typename cv::SparseMat_<T>::Node* node = it.node();
		cout << "(" << node->idx[0] << ", " << node->idx[1] << ") = " << *it << '\n' << endl;
	}
}

int main() {
	const int n_mat_size = 5;
	const int n_mat_sz[] = { n_mat_size , n_mat_size , n_mat_size };

	// 3������ �迭 ����
	cv::Mat n_mat0(3, n_mat_sz, CV_32FC1);
	cv::Mat n_mat1(3, n_mat_sz, CV_32SC1);

	// 0.0 ~ 1.0 ���� ������ �ε� �Ҽ��� �� 125���� �迭 ä���.
	cv::RNG rng;
	rng.fill(n_mat0, cv::RNG::UNIFORM, 0.f, 1.f);
	rng.fill(n_mat1, cv::RNG::UNIFORM, 1, 10);

	// ��� ��ķ� ��ȯ
	cv::SparseMat_<float> n_sparseMat0(n_mat0);
	cv::SparseMat_<int> n_sparseMat1(n_mat1);

	print_matrix<float>(&n_sparseMat0);
	cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�" << endl;
	print_matrix<int>(&n_sparseMat1);
}
*/