#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

#define L 256

// ������׷�, ���� �������� �󵵼��� ����׷����� ǥ���� ��, �������� Ȯ���е� �Լ��� ������ �� �ִ�.
// ������׷� ��Ȱȭ, 
// �Է� ������ ȭ�Ұ��� �������� �Լ�(cdf)�� ����Ͽ� ��� ������ ȭ�Ұ��� ����ϴ� ���󰳼� ���
// ��Ȱȭ �����ϸ� ȭ�Ұ��� ������ ���� ����� ������ ȭ�Ұ� ������ ���� ���� �������� ���� �� �ִ�. (�� �����ϰ� ���δ�.)
int main() {
	uchar dataA[16]{ 0, 0, 0, 0,
					1, 1, 3, 5,
					6, 1, 1, 3,
					4, 3, 1, 7 };
	Mat A(4, 4, CV_8U, dataA);
	cout << "A = " << A << endl;

	int histSize[] = { L };
	float valueRange[] = { 0, L };
	const float* ranges[] = { valueRange };
	int channels[] = { 0 };
	int dims = 1;

	Mat hist;
	calcHist(&A, 1, channels, Mat(), hist, dims, histSize, ranges); // false == ����
	cout << "hist = " << hist << endl;

	Mat pdf;
	normalize(hist, pdf, L - 1, 0, NORM_L1); // sum of pef = L -1
	cout << "pdf = " << pdf << endl;
	cout << "pdf.size() = " << pdf.size() << endl;
	cout << "pdf.type() = " << pdf.type() << endl;

	Mat cdf(pdf.size(), pdf.type());
	cdf.at<float>(0) = pdf.at<float>(0); // (0, 0)
	for (int i = 1; i < pdf.rows; i++) cdf.at<float>(i) = cdf.at<float>(i - 1) + pdf.at<float>(i); // (0, 0)
	cout << "cdf = " << cdf << endl;

	Mat table(cdf.size(), CV_8U);
	table.at<uchar>(0) = 0;
	for (int i = 0; i < pdf.rows; i++) table.at<uchar>(i) = cvRound(cdf.at<float>(i)); // (i, 0)
	cout << "table = " << table << endl;

	Mat dst;
	LUT(A, table, dst);
	cout << "dst = " << dst << endl;

	return 0;
}