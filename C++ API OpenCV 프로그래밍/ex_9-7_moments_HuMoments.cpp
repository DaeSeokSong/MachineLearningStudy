/*
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
	Mat srcImg = imread("D:\\example\\dataset\\momentTest.png", IMREAD_GRAYSCALE);
	if (srcImg.empty()) return -1;

	// moments
	// ��輱�� ��Ÿ���� �ٰ��� �Ǵ� ������ 3�� ���Ʈ���� ����Ѵ�.
	// Moments Ŭ������ ��ȯ�ϴµ�, ����/�߽�/����ȭ�� �߽� ���Ʈ�� ���ȴ�.
	Moments M = moments(srcImg, true);

	// ���� �߽���
	Point2f center;
	center.x = M.m10 / M.m00;
	center.y = M.m01 / M.m00;

	Mat dstImg;
	cvtColor(srcImg, dstImg, COLOR_GRAY2BGR);
	circle(dstImg, center, 5, Scalar(0, 0, 255), -1);
	imshow("dstImg", dstImg);

	// HuMoments
	// moments �Լ��� ����� ���Ʈ �Ǵ� moments���� Hu�� �̵�, ������, ȸ���� �Һ��� ���Ʈ hu��
	// ����ȭ�� �߽� ���Ʈ�� �̿��Ͽ� Hu�� 7 ���Ʈ�� ����Ѵ�.
	// ���ѵ� �ػ��� ��ü ������ Hu ���Ʈ�� �̵�, ������, ȸ���� ��ȯ ���󿡼�
	// ���� Hu ���Ʈ�� �ٸ� �� ������ ���� ����.
	Mat hu;
	HuMoments(M, hu);
	for (int i = 0; i < hu.rows; i++)
	{
		cout << "hu[" << i << "] = ";
		cout << hu.at<double>(i) << endl;
	}

	waitKey(0);
	return 0;
}
*/