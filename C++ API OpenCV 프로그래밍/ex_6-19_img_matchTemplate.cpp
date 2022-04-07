/*
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

// ���ø� ��Ī
// ���� ���󿡼� ���ø� ����� ��Ī�Ǵ� ��ġ�� Ž���ϴ� ����̴�. ���ø� ��Ī�� ��ü �ν�, ���׷��� ���󿡼� ������ ���� � ���� �� �ִ�.
// ���� ������ (0, 0) ��ġ�� ���ø� ������ (0, 0)�� ���߰� ������ �ֻ� ������ ���ʺ��� ������, ������ �Ʒ��� ���� �������� �� �������� �ű� �� ���� ���ø� ����� ���ø� ������ �ش� ��ġ�� �ִ� ���� ������ ȭ�Ұ��� ���Ͽ� �����Ѵ�.
int main() {
	Mat srcImg = imread("D:\\example\\dataset\\alphabets\\alphabet_full.png", IMREAD_GRAYSCALE);
	if (srcImg.empty()) return -1;

	Mat tImg1 = imread("D:\\example\\dataset\\alphabets\\A.png", IMREAD_GRAYSCALE);
	Mat tImg2 = imread("D:\\example\\dataset\\alphabets\\S.png", IMREAD_GRAYSCALE);
	Mat tImg3 = imread("D:\\example\\dataset\\alphabets\\p.png", IMREAD_GRAYSCALE);
	Mat tImg4 = imread("D:\\example\\dataset\\alphabets\\vwx.png", IMREAD_GRAYSCALE);
	Mat tImg5 = imread("D:\\example\\dataset\\alphabets\\I.png", IMREAD_GRAYSCALE);
	Mat tImg6 = imread("D:\\example\\dataset\\alphabets\\smallX.png", IMREAD_GRAYSCALE);
	Mat tImg7 = imread("D:\\example\\dataset\\alphabets\\largeX.png", IMREAD_GRAYSCALE);
	Mat tImg8 = imread("D:\\example\\dataset\\alphabets\\smallO.png", IMREAD_GRAYSCALE);
	Mat tImg9 = imread("D:\\example\\dataset\\alphabets\\largeO.png", IMREAD_GRAYSCALE);
	Mat tImg10 = imread("D:\\example\\dataset\\alphabets\\smallL.png", IMREAD_GRAYSCALE);
	if (tImg1.empty() || tImg2.empty() || tImg3.empty() || tImg4.empty()) return -1;

	Mat dstImg;
	cvtColor(srcImg, dstImg, COLOR_GRAY2BGR);

	double minVal, maxVal;
	Point minLoc, maxLoc;
	Mat result;

	// matchTemplate
	// ���� ���󿡼� �� ��° �Ű�������  method ���(�� ��° �Ű�����)�� ���� ���ø� ��Ī�� ����Ͽ� result(�� ��° �Ű�����)�� ��ȯ�Ѵ�.
	// ���ø� ��Ī ��ġ�� ã�� ���ؼ��� result�� minMaxLoc �Լ��� ����Ͽ� ã�� �� �ִ�. �ּҰ��� TM_SQDIFF, �ִ밪�� TM_CCORR, TM_CCOEFF
	// ���� ���� �ִ�/�ּҰ��� �ִٸ� ó�� ��ġ�� ã�´�.

	// TM_SQDIFF, ��Ī�Ǵ� ��ġ���� ���� ���� ���´�.
	matchTemplate(srcImg, tImg1, result, TM_SQDIFF);
	minMaxLoc(result, &minVal, NULL, &minLoc, NULL);
	rectangle(dstImg, minLoc, Point(minLoc.x + tImg1.cols, minLoc.y + tImg1.rows), Scalar(255, 0, 0), 2);

	// TM_SQDIFF_NORMED, TM_SQDIFF ����� Ư�� ������ ���� �� ����ȭ�Ѵ�.
	matchTemplate(srcImg, tImg2, result, TM_SQDIFF_NORMED);
	minMaxLoc(result, &minVal, NULL, &minLoc, NULL);
	rectangle(dstImg, minLoc, Point(minLoc.x + tImg2.cols, minLoc.y + tImg2.rows), Scalar(0, 255, 0), 2);

	// TM_CCORR_NORMED, TM_CCORR ����� Ư�� ������ ���� �� ����ȭ�Ѵ�.
	matchTemplate(srcImg, tImg3, result, TM_CCORR_NORMED);
	minMaxLoc(result, NULL, &maxVal, NULL, &maxLoc);
	rectangle(dstImg, maxLoc, Point(maxLoc.x + tImg3.cols, maxLoc.y + tImg3.rows), Scalar(0, 0, 255), 2);

	// TM_CCOEFF_NORMED, TM_CCOEFF ����� Ư�� ������ ���� �� ����ȭ�Ѵ�.
	matchTemplate(srcImg, tImg4, result, TM_CCOEFF_NORMED);
	minMaxLoc(result, NULL, &maxVal, NULL, &maxLoc);
	rectangle(dstImg, maxLoc, Point(maxLoc.x + tImg4.cols, maxLoc.y + tImg4.rows), Scalar(255, 0, 255), 2);

	// ����ϰ� ���� ���ĺ��� ���� ��
	matchTemplate(srcImg, tImg5, result, TM_SQDIFF);
	minMaxLoc(result, &minVal, NULL, &minLoc, NULL);
	rectangle(dstImg, minLoc, Point(minLoc.x + tImg5.cols, minLoc.y + tImg5.rows), Scalar(0, 255, 255), 2);

	// �빮�� �ҹ��� ����
	matchTemplate(srcImg, tImg6, result, TM_SQDIFF);
	minMaxLoc(result, &minVal, NULL, &minLoc, NULL);
	rectangle(dstImg, minLoc, Point(minLoc.x + tImg6.cols, minLoc.y + tImg6.rows), Scalar(255, 255, 0), 2);
	matchTemplate(srcImg, tImg7, result, TM_SQDIFF);
	minMaxLoc(result, &minVal, NULL, &minLoc, NULL);
	rectangle(dstImg, minLoc, Point(minLoc.x + tImg7.cols, minLoc.y + tImg7.rows), Scalar(255, 255, 0), 2);
	matchTemplate(srcImg, tImg8, result, TM_SQDIFF);
	minMaxLoc(result, &minVal, NULL, &minLoc, NULL);
	rectangle(dstImg, minLoc, Point(minLoc.x + tImg8.cols, minLoc.y + tImg8.rows), Scalar(255, 255, 0), 2);
	matchTemplate(srcImg, tImg9, result, TM_SQDIFF);
	minMaxLoc(result, &minVal, NULL, &minLoc, NULL);
	rectangle(dstImg, minLoc, Point(minLoc.x + tImg9.cols, minLoc.y + tImg9.rows), Scalar(255, 255, 0), 2);

	// ���ø� ��ġ ��� �� ��ġ ��
	matchTemplate(srcImg, tImg10, result, TM_SQDIFF);
	minMaxLoc(result, &minVal, NULL, &minLoc, NULL);
	rectangle(dstImg, minLoc, Point(minLoc.x + tImg10.cols, minLoc.y + tImg10.rows), Scalar(127, 0, 0), 2);
	matchTemplate(srcImg, tImg10, result, TM_SQDIFF_NORMED);
	minMaxLoc(result, &minVal, NULL, &minLoc, NULL);
	rectangle(dstImg, minLoc, Point(minLoc.x + tImg10.cols, minLoc.y + tImg10.rows), Scalar(0, 127, 0), 2);
	matchTemplate(srcImg, tImg10, result, TM_CCORR_NORMED);
	minMaxLoc(result, NULL, &maxVal, NULL, &maxLoc);
	rectangle(dstImg, maxLoc, Point(maxLoc.x + tImg10.cols, maxLoc.y + tImg10.rows), Scalar(0, 0, 127), 2);
	matchTemplate(srcImg, tImg10, result, TM_CCOEFF_NORMED);
	minMaxLoc(result, NULL, &maxVal, NULL, &maxLoc);
	rectangle(dstImg, maxLoc, Point(maxLoc.x + tImg10.cols, maxLoc.y + tImg10.rows), Scalar(127, 127, 127), 2);

	imshow("dstImg", dstImg);
	waitKey(0);
	return 0;
}
*/