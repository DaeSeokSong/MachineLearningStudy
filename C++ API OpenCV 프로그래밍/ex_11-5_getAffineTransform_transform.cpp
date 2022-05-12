/*
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
	Mat srcImg = imread("D:\\example\\dataset\\lena_color.png");
	if (srcImg.empty()) return -1;
	else resize(srcImg, srcImg, Size(512, 512));

	Point2f srcP[] = { Point2f(100.0f, 100.0f),
						Point2f(50.0f, 200.0f),
						Point2f(150.0f, 250.0f) };
	Point2f dstP[] = { Point2f(400.0f, 50.0f),
						Point2f(350.0f, 150.0f),
						Point2f(400.0f, 300.0f) };

	vector<Point2f> srcV(srcP, srcP + sizeof(srcP) / sizeof(srcP[0]));
	vector<Point2f> dstV(dstP, dstP + sizeof(dstP) / sizeof(dstP[0]));

	for (int i = 0; i < srcV.size(); i++)
	{
		line(srcImg, srcV[i], srcV[(i + 1) % 3], Scalar(255, 0, 0), 2);
		line(srcImg, dstV[i], dstV[(i + 1) % 3], Scalar(0, 0, 255), 2);
	}

	Mat M;
	//getAffineTransform
	//���� ���� ���� ���� ���� �ﰢ���� �̷�� �� ���� ��ǥ �迭���� 2*3 ������ ��ȯ ����� ��ȯ�Ѵ�.
	M = getAffineTransform(srcV, dstV);

	vector<Point2f> dstV2;
	//transform
	//��ȯ ��Ŀ� �°� �Է� ����� ��ȯ��Ų ����� ��ȯ�Ѵ�.
	transform(srcV, dstV2, M);
	for (int i = 0; i < srcV.size(); i++)
	{
		line(srcImg, srcV[i], dstV2[i], Scalar(0, 255, 0), 2);
	}
	imshow("srcImg", srcImg);
	waitKey(0);

	Mat A(3, 1, CV_64F);
	Mat B;
	for (int i = 0; i < srcV.size(); i++)
	{
		A.at<double>(0, 0) = srcV[i].x;
		A.at<double>(1, 0) = srcV[i].y;
		A.at<double>(2, 0) = 1.0;
		B = M * A;

		Point2f pt2;
		pt2.x = B.at<double>(0, 0);
		pt2.y = B.at<double>(1, 0);
		line(srcImg, srcV[i], pt2, Scalar(0, 255, 255), 2);
	}
	imshow("srcImg", srcImg);
	waitKey(0);

	Mat iM;
	//invertAffineTransform
	//2*3 ������ ��ȯ ����� 2*3 ����ȯ ����� ����Ͽ� ��ȯ�Ѵ�.
	invertAffineTransform(M, iM);
	for(int i = 0; i < 3; i++)
	{
		A.at<double>(0, 0) = dstV[i].x;
		A.at<double>(1, 0) = dstV[i].y;
		A.at<double>(2, 0) = 1.0;
		B = iM * A;

		Point2f pt1;
		pt1.x = B.at<double>(0, 0);
		pt1.y = B.at<double>(1, 0);
		line(srcImg, pt1, dstV[i], Scalar(255, 255, 0), 2);
	}
	imshow("srcImg", srcImg);
	waitKey(0);

	return 0;
}
*/