/*
#include <iostream>
#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;

int main()
{
	Mat srcImg = imread("D:\\example\\dataset\\lena_color.png", IMREAD_GRAYSCALE);
	if (srcImg.empty()) return -1;

	Mat srcImg2(srcImg.size(), srcImg.type());
	Mat dstImg(srcImg.size(), srcImg.type());
	Size dsize = dstImg.size();
	Point2f center(dsize.width / 2, dsize.height / 2);

	double maxR = sqrt(center.x * center.x + center.y * center.y);
	float M = dsize.width / log(maxR);

	//logPolar
	//������ �α�-����ǥ�� �������� ��ȯ�ϴ� �Լ�
	//���󿡼� center�� �߽����� ��ȯ�� ��� ������ ��ȯ�Ѵ�.
	//flag�� �������� warp ����� ��Ÿ����.
	logPolar(srcImg, dstImg, center, M, INTER_LINEAR + WARP_FILL_OUTLIERS);
	logPolar(dstImg, srcImg2, center, M, INTER_LINEAR + WARP_FILL_OUTLIERS + WARP_INVERSE_MAP);

	imshow("srcImg", srcImg);
	imshow("srcImg2", srcImg2);
	imshow("dstImg", dstImg);
	waitKey(0);
	return 0;
}
*/