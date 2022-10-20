/*
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

// ������׷�, ���� �������� �󵵼��� ����׷����� ǥ���� ��, �������� Ȯ���е� �Լ��� ������ �� �ִ�.
// ������ Ex1. �Ǻ� ������ ������׷��� ����� �� �������ϸ�, �� / �� ���� ������ ������ �� �ִ�.
// ������ Ex2. ��ü ������ ������ ��ü�� ���ɿ��� �����ϰ� �÷� ����(Hue)�� ������׷����� ����ϰ�, ���� ������׷��� ������ �������ϰ� ����ȭ(�Ӱ�ġ)�ϸ� �÷������� ����� ������ ���� �����ϴ�.
// findContours �Լ��� ��ü�� ��� �����ϰ�, ��ü ���� ����� meanShift�� CamShift���� �������� ����Ѵ�.
int main() {
	uchar dataA[16]{ 0, 0, 0, 0,
					1, 1, 3, 5,
					6, 1, 1, 3,
					4, 3, 1, 7 };
	Mat A(4, 4, CV_8U, dataA);
	cout << "A = " << A << endl;

	int histSize[] = { 8 };
	float valueRange[] = { 0, 8 };
	const float* ranges[] = { valueRange };
	int channels[] = { 0 };
	int dims = 1;

	Mat hist;
	calcHist(&A, 1, channels, Mat(), hist, dims, histSize, ranges);
	cout << "hist = " << hist << endl;

	Mat backProject;
	calcBackProject(&A, 1, channels, hist, backProject, ranges);
	cout << "backProject = " << backProject << endl;

	return 0;
}
*/