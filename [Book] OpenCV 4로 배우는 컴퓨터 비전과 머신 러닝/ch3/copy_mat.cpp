//#include <stdio.h>
//#include "opencv2/opencv.hpp"
//
//using namespace std;
//using namespace cv;
//
//int main()
//{
//	Mat img1 = imread("dog.bmp");
//
//	// ���� ����
//	Mat img2 = img1;
//	Mat img3;
//	img3 = img1;
//
//	// ���� ����
//	Mat img4 = img1.clone();
//	Mat img5;
//	img1.copyTo(img5);
//
//	img1.setTo(Scalar(0, 255, 255)); // Yellow
//
//	imshow("img1 by �۴뼮", img1);
//	imshow("img2 by �۴뼮", img2);
//	imshow("img3 by �۴뼮", img3);
//	imshow("img4 by �۴뼮", img4);
//	imshow("img5 by �۴뼮", img5);
//
//	waitKey(0);
//
//	return 0;
//}