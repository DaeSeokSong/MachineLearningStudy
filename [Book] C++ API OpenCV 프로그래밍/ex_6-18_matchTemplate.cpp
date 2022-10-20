/*
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

void Printmat(const char* strName, Mat m);

// ���ø� ��Ī
// ���� ���󿡼� ���ø� ����� ��Ī�Ǵ� ��ġ�� Ž���ϴ� ����̴�. ���ø� ��Ī�� ��ü �ν�, ���׷��� ���󿡼� ������ ���� � ���� �� �ִ�.
// ���� ������ (0, 0) ��ġ�� ���ø� ������ (0, 0)�� ���߰� ������ �ֻ� ������ ���ʺ��� ������, ������ �Ʒ��� ���� �������� �� �������� �ű� �� ����
// ���ø� ����� ���ø� ������ �ش� ��ġ�� �ִ� ���� ������ ȭ�Ұ��� ���Ͽ� �����Ѵ�.
// ���ø� ��Ī�� �̵� ������ �ذ��� �� ������, ȸ�� �� �����ϸ��� ��ü�� ���� ��Ī��
// ���ø��� ȸ�� �� �����ϸ��ذ��� ���� ���� ���ø��� �̿��� ��Ī ����� ������, ����� ������.
// ������ ��⸦ �״�� ����� ���� �ְ�, ����, �ڳ���, ���ļ� ��Ȳ �� Ư¡ �������� ��ȯ�Ͽ� ��Ī�� ������ �� ������,
// ��� � �� �ΰ��ϵ��� ����ȭ�� �ʿ��ϴ�.
// ��Ī ����� �������(Correlation), SAD(Sum of Absolute Difference) ���� ����Ѵ�.
int main() {
	float dataA[] = { 1, 1, 1, 1, 1, 1,
					1, 1, 1, 1, 1, 1,
					1, 1, 9, 9, 1, 1,
					1, 1, 9, 9, 1, 1,
					1, 1, 1, 1, 1, 1,
					1, 1, 1, 1, 1, 1 };
	float dataB[] = { 9, 9, 1,
					9, 9, 1,
					1, 1, 1 };
	Mat A(6, 6, CV_32F, dataA);
	Printmat("A = ", A);
	Mat B(3, 3, CV_32F, dataB);
	Printmat("B = ", B);

	double minVal, maxVal;
	Point minLoc, maxLoc;
	Mat result;

	// matchTemplate
	// ���� ���󿡼� �� ��° �Ű�������  method ���(�� ��° �Ű�����)�� ���� ���ø� ��Ī�� ����Ͽ� result(�� ��° �Ű�����)�� ��ȯ�Ѵ�.
	// ���ø� ��Ī ��ġ�� ã�� ���ؼ��� result�� minMaxLoc �Լ��� ����Ͽ� ã�� �� �ִ�. �ּҰ��� TM_SQDIFF, �ִ밪�� TM_CCORR, TM_CCOEFF
	// ���� ���� �ִ�/�ּҰ��� �ִٸ� ó�� ��ġ�� ã�´�.

	// TM_SQDIFF, ��Ī�Ǵ� ��ġ���� ���� ���� ���´�.
	matchTemplate(A, B, result, TM_SQDIFF);
	Printmat("result: TM_SQDIFF = ", result);
	minMaxLoc(result, &minVal, NULL, &minLoc, NULL);
	cout << "TM_SQDIFF" << endl;
	cout << "minVal = " << minVal << endl;
	cout << "minLoc = " << minLoc << endl << endl;

	// TM_SQDIFF_NORMED, TM_SQDIFF ����� Ư�� ������ ���� �� ����ȭ�Ѵ�.
	matchTemplate(A, B, result, TM_SQDIFF_NORMED);
	Printmat("result: TM_SQDIFF_NORMED = ", result);
	minMaxLoc(result, &minVal, NULL, &minLoc, NULL);
	cout << "TM_SQDIFF" << endl;
	cout << "minVal = " << minVal << endl;
	cout << "minLoc = " << minLoc << endl << endl;

	// TM_CCORR, ���� �հ踦 ����Ѵ�. ��Ī�Ǵ� ��ġ���� ū ���� ���´�.
	matchTemplate(A, B, result, TM_CCORR);
	Printmat("result: TM_CCORR = ", result);
	minMaxLoc(result, NULL, &maxVal, NULL, &maxLoc);
	cout << "TM_SQDIFF" << endl;
	cout << "maxVal = " << maxVal << endl;
	cout << "maxLoc = " << maxLoc << endl << endl;

	// TM_CCORR_NORMED, TM_CCORR ����� Ư�� ������ ���� �� ����ȭ�Ѵ�.
	matchTemplate(A, B, result, TM_CCORR_NORMED);
	Printmat("result: TM_CCORR_NORMED = ", result);
	minMaxLoc(result, NULL, &maxVal, NULL, &maxLoc);
	cout << "TM_SQDIFF" << endl;
	cout << "maxVal = " << maxVal << endl;
	cout << "maxLoc = " << maxLoc << endl << endl;

	// TM_CCOEFF, �� ��հ����� �����Ͽ� ���Ѵ�. ��Ī�Ǵ� ��ġ���� ū ���� ���´�.
	matchTemplate(A, B, result, TM_CCOEFF);
	Printmat("result: TM_CCOEFF = ", result);
	minMaxLoc(result, NULL, &maxVal, NULL, &maxLoc);
	cout << "TM_SQDIFF" << endl;
	cout << "maxVal = " << maxVal << endl;
	cout << "maxLoc = " << maxLoc << endl << endl;

	// TM_CCOEFF_NORMED, TM_CCOEFF ����� Ư�� ������ ���� �� ����ȭ�Ѵ�.
	matchTemplate(A, B, result, TM_CCOEFF_NORMED);
	Printmat("result: TM_CCOEFF_NORMED = ", result);
	minMaxLoc(result, NULL, &maxVal, NULL, &maxLoc);
	cout << "TM_SQDIFF" << endl;
	cout << "maxVal = " << maxVal << endl;
	cout << "maxLoc = " << maxLoc << endl << endl;

	return 0;
}

void Printmat(const char* strName, Mat m) {
	int x, y;
	float fValue;
	cout << endl << strName << endl;
	cout << setiosflags(ios::fixed);

	for (y = 0; y < m.rows; y++) {
		for (x = 0; x < m.cols; x++) {
			fValue = m.at<float>(y, x);
			cout << setprecision(2) << setw(8) << fValue;
		}
		cout << endl;
	}
	cout << endl;
}
*/