/*
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;

int main() {
	int size[] = { 10, 10 };
	cv::SparseMat sm(2, size, CV_32F);

	for (int i = 0; i < 10; i++) {
		int idx[2];
		idx[0] = size[0] * rand();
		idx[1] = size[1] * rand();

		sm.ref<float>(idx) += 1.0f;
	}

	// 0이 아닌 요소 출력
	cv::SparseMatConstIterator_<float> it = sm.begin<float>();
	cv::SparseMatConstIterator_<float> it_end = sm.end<float>();

	for (; it != it_end; ++it) {
		// node는 반복자가 가리키는 행렬의 내부 데이터 노드의 포인터
		// node 구조체 안에는 관련 요소의 색인(idx는 int[]타입)과 해시값이 들어있다.
		const cv::SparseMat::Node* node = it.node();
		printf("(%3d, %3d) %f\n", node->idx[0], node->idx[1], *it);
		cout << '\n';
	}
}
*/