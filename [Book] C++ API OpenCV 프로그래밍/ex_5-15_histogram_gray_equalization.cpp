/*
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

// ������׷�, ���� �������� �󵵼��� ����׷����� ǥ���� ��, �������� Ȯ���е� �Լ��� ������ �� �ִ�.
// ������׷� ��Ȱȭ, �Է� ������ ȭ�Ұ��� �������� �Լ�(cdf)�� ����Ͽ� ��� ������ ȭ�Ұ��� ����ϴ� ���󰳼� ���
// ��Ȱȭ �����ϸ� ȭ�Ұ��� ������ ���� ����� ������ ȭ�Ұ� ������ ���� ���� �������� ���� �� �ִ�. (�� �����ϰ� ���δ�.)
int main() {
	Mat srcImg = imread("D:/example/dataset/lena_color.png", IMREAD_GRAYSCALE);
	if (srcImg.empty()) return -1;

	Mat dstImg;
	equalizeHist(srcImg, dstImg); // ������׷� ���(����) �� ��Ȱȭ

	vector<int> params;
	params.push_back(IMWRITE_JPEG_QUALITY);
	params.push_back(100);
	imwrite("D:/example/dataset/imageEq2.jpg", dstImg, params); // ������׷� ��Ȱȭ�� dstImg�� jpg ����(IMWRITE_JPEG_QUALITY=100)�� ����

	imshow("dstImg", dstImg);
	waitKey(0);

	return 0;
}
*/