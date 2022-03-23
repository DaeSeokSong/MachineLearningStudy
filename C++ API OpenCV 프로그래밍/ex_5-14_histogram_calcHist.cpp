/*
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

#define L 256

// ������׷�, ���� �������� �󵵼��� ����׷����� ǥ���� ��, �������� Ȯ���е� �Լ��� ������ �� �ִ�.
// ������׷� ��Ȱȭ, �Է� ������ ȭ�Ұ��� �������� �Լ�(cdf)�� ����Ͽ� ��� ������ ȭ�Ұ��� ����ϴ� ���󰳼� ���
// ��Ȱȭ �����ϸ� ȭ�Ұ��� ������ ���� ����� ������ ȭ�Ұ� ������ ���� ���� �������� ���� �� �ִ�. (�� �����ϰ� ���δ�.)
int main() {
	Mat srcImg = imread("D:/example/dataset/lena_color.png");
	if (srcImg.empty()) return -1;

	int histSize[] = { L };
	float valueRange[] = { 0, L };
	const float* ranges[] = { valueRange };
	int channels[] = { 0 };
	int dims = 1;

	Mat hist;
	// ������׷� ���(����)
	calcHist(&srcImg, 1, channels, Mat(), hist, dims, histSize, ranges); // false == ����

	Mat pdf;
	normalize(hist, pdf, L - 1, 0, NORM_L1); // sum of pef = L -1

	Mat cdf(pdf.size(), pdf.type());
	cdf.at<float>(0) = pdf.at<float>(0); // (0, 0)
	for (int i = 1; i < pdf.rows; i++) cdf.at<float>(i) = cdf.at<float>(i - 1) + pdf.at<float>(i); // (0, 0)

	Mat table(cdf.size(), CV_8U);
	table.at<uchar>(0) = 0;
	for (int i = 0; i < pdf.rows; i++) table.at<uchar>(i) = cvRound(cdf.at<float>(i)); // (i, 0)

	Mat dstImg;
	LUT(srcImg, table, dstImg);

	vector<int> params;
	params.push_back(IMWRITE_JPEG_QUALITY);
	params.push_back(100);
	imwrite("D:/example/dataset/imageEq1.jpg", dstImg, params); // ������׷� ��Ȱȭ�� dstImg�� jpg ����(IMWRITE_JPEG_QUALITY=100)�� ����

	imshow("dstImg", dstImg);
	waitKey(0);

	return 0;
}
*/