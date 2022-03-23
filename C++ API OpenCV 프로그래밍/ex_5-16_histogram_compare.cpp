/*
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

void drawHistogram(Mat& img, Mat hist);

// ������׷�, ���� �������� �󵵼��� ����׷����� ǥ���� ��, �������� Ȯ���е� �Լ��� ������ �� �ִ�.
int main() {
	Mat srcImg1 = imread("D:/example/dataset/imageEq1.jpg", IMREAD_GRAYSCALE);
	if (srcImg1.empty()) return -1;

	Mat srcImg2 = imread("D:/example/dataset/imageEq2.jpg", IMREAD_GRAYSCALE);
	if (srcImg2.empty()) return -1;

	int histSize = 256;
	float valueRange[] = { 0, 256 };
	const float* ranges[] = { valueRange };
	int channels = 0;
	int dims = 1;

	Mat H1;
	calcHist(&srcImg1, 1, &channels, Mat(), H1, dims, &histSize, ranges);
	normalize(H1, H1, 1, 0, NORM_L1, CV_32F);

	Mat H2;
	calcHist(&srcImg2, 1, &channels, Mat(), H2, dims, &histSize, ranges);
	normalize(H2, H2, 1, 0, NORM_L1, CV_32F);

	double dist1 = compareHist(H1, H2, HISTCMP_CORREL); // [-1, 1] �������� ���� ũ�� �� ������׷��� ������ ���̴�.
	cout << "dist1 = " << dist1 << endl;

	double dist2 = compareHist(H1, H2, HISTCMP_CHISQR); // ���� ���� ���� �� ������׷��� ������ ���̴�.
	cout << "dist2 = " << dist2 << endl;

	double dist3 = compareHist(H1, H2, HISTCMP_INTERSECT); // [0, 1] �������� ���� ���� ���� �� ������׷��� ������ ���̴�.
	cout << "dist3 = " << dist3 << endl;

	double dist4 = compareHist(H1, H2, HISTCMP_BHATTACHARYYA); // ���� Ŭ ���� �� ������׷��� ������ ���̴�. �� ������׷� ��� ����ȭ �Ǿ������� [0, 1] ������ ������.
	cout << "dist4 = " << dist4 << endl;

	Mat histImg1;
	drawHistogram(histImg1, H1);
	imshow("histImg1", histImg1);

	Mat histImg2;
	drawHistogram(histImg2, H2);
	imshow("histImg2", histImg2);

	waitKey(0);

	return 0;
}

void drawHistogram(Mat& img, Mat hist) {
	if (img.empty()) img.create(512, 512, CV_8U);

	normalize(hist, hist, 0, img.rows, NORM_MINMAX, CV_32F);

	img = Scalar(255);
	int binW = cvRound((double)img.cols / hist.rows);
	int x1, y1, x2, y2;
	for (int i = 0; i < hist.rows; i++) {
		x1 = i * binW;
		y1 = img.rows;
		x2 = (i + 1) * binW;
		y2 = img.rows - cvRound(hist.at<float>(i));
		rectangle(img, Point(x1, y1), Point(x2, y2), Scalar(0), -1);
	}
}
*/