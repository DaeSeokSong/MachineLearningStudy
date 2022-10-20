/*
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

// ������׷�, ���� �������� �󵵼��� ����׷����� ǥ���� ��, �������� Ȯ���е� �Լ��� ������ �� �ִ�.
int main() {
	Mat srcImg = imread("D:/example/dataset/lena_color.png", IMREAD_GRAYSCALE);
	if (srcImg.empty()) return -1;

	int histSize = 64; // 32
	float valueRange[] = { 0, 256 };
	const float* ranges[] = { valueRange };
	int channels = 0;
	int dims = 1;

	Mat hist;
	// uniform�� ����Ʈ�� true
	calcHist(&srcImg, 1, &channels, Mat(), hist, dims, &histSize, ranges);

	Mat histImg(512, 512, CV_8U);
	normalize(hist, hist, 0, histImg.rows, NORM_MINMAX, CV_32F);

	histImg = Scalar(255);
	int binW = cvRound((double)histImg.cols / histSize);
	int x1, y1, x2, y2;
	for (int i = 0; i < histSize; i++) {
		x1 = i * binW;
		y1 = histImg.rows;
		x2 = (i + 1) * binW;
		y2 = histImg.rows - cvRound(hist.at<float>(i));

		rectangle(histImg, Point(x1, y1), Point(x2, y2), Scalar(0), -1);
	}

	imshow("srcImg", srcImg);
	imshow("histImg", histImg);
	waitKey(0);

	return 0;
}
*/