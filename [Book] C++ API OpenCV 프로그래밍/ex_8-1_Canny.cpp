/*
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {
	// Canny(�Է�, ���, �Ӱ谪1, �Ӱ谪2 (1 < 2), ���� ���� Sobel ���� ũ��, �׷����Ʈ ũ�� ��� ���)
	// ����þ� ���͸� > Sobel�� ���� ũ�� ��� > ���� ���⿡ ���� ũ�Ⱑ �ִ밪�� ȭ�Ҹ� �����
	// �������� 0���� ���� > ū �Ӱ谪���� ���� �Ӱ谪�� ���� ������ �����ϸ�
	// ������ ����(�����׸��ý� �Ӱ谪 ���)

	Mat srcImg = imread("D:\\example\\dataset\\lena_color.png", IMREAD_GRAYSCALE);
	if (srcImg.empty()) return -1;

	Mat edges;
	Canny(srcImg, edges, 50, 100);
	imshow("edges", edges);
	waitKey(0);

	return 0;
}
*/