/*
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
	Mat srcImg = imread("D:\\example\\dataset\\lena_color.png", IMREAD_GRAYSCALE);
	if (srcImg.empty()) return -1;

	Mat mapX, mapY;
	mapX.create(srcImg.size(), CV_32FC1);
	mapY.create(srcImg.size(), CV_32FC1);

	for (int y = 0; y < srcImg.rows; y++)
	{
		for (int x = 0; x < srcImg.cols; x++)
		{
			mapX.at<float>(y, x) = x;
			//mapX.at<float>(y, x) = srcImg.cols - x;
			mapY.at<float>(y, x) = srcImg.rows - y;
		}
	}

	Mat dstImg(srcImg.size(), srcImg.type());
	//remap
	//�Է� ������ �� ���� ��ȯ ��ǥ ����� �̿��Ͽ� ��ȯ��Ų ��� ������ ��ȯ�Ѵ�.
	//x�� y�� ���� ���� ��ȯ ����� ���� �� �� �ִ�.
	remap(srcImg, dstImg, mapX, mapY, INTER_LINEAR);

	imshow("srcImg", srcImg);
	imshow("dstImg", dstImg);

	waitKey(0);
	return 0;
}
*/