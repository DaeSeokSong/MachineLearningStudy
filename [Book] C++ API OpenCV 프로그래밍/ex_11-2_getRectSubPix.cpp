/*
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

void PrintMat(const char* strName, Mat A);

int main()
{
	Mat srcImg = imread("D:\\example\\dataset\\lena_color.png", IMREAD_GRAYSCALE);
	if (srcImg.empty()) return -1;

	Rect rtROI(100, 100, 10, 10);
	Mat roi = srcImg(rtROI);
	PrintMat("roi = ", roi);

	Point2f center(105.0f, 105.0f);
	Size patchSize(5, 5);
	Mat patch;

	// getRectSubPix
	// �Է¿��󿡼� center�� �߽������� �ϴ� patchSize ũ���� ȭ�Ұ��� �о� patch ��Ŀ� �����Ѵ�.
	// ������ �ƴ� ��ǥ������ ȭ�Ұ��� ����� ������������ ����Ѵ�.
	// center�� �ݵ�� �Է¿��� ��ǥ ���ο� �־�� ������, patchSize�� ������ ũ�⸦ �Ѿ �ȴ�.
	getRectSubPix(srcImg, patchSize, center, patch, CV_32F);
	PrintMat("patch = ", patch);

	waitKey(0);
	return 0;
}

void PrintMat(const char* strName, Mat A)
{
	int x, y;
	uchar uValue;
	float fValue;
	double dValue;
	int iValue;

	std::cout << endl << strName << endl;
	std::cout << setiosflags(ios::fixed);
	for (y = 0; y < A.rows; y++)
	{
		for (x = 0; x < A.cols; x++)
		{
			switch (A.type())
			{
			case CV_8U:
				uValue = A.at<uchar>(y, x);
				std::cout << setw(6) << (int)uValue;
				break;
			case CV_32S:
				iValue = A.at<int>(y, x);
				std::cout << setw(6) << iValue;
				break;
			case CV_32F:
				fValue = A.at<float>(y, x);
				std::cout << setprecision(2) << setw(8) << fValue;
				break;
			case CV_64F:
				dValue = A.at<double>(y, x);
				std::cout << setprecision(2) << setw(8) << dValue;
				break;
			}
		}
		std::cout << endl;
	}
	std::cout << endl;
}
*/