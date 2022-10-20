/*
#include <iostream>
#include <opencv2/opencv.hpp>
#include <math.h>

using namespace std;
using namespace cv;

int main() {
	// 1-a. ���� �ε� �Ҽ��� ����
	double d = -9.80814;

	// 1-b. ���밪 -> �ݿø�, �ø�, ������
	cout << "������ = " << d << endl;
	cout << "���밪 = " << fabs(d) << endl;
	cout << "�ø��� = " << cvCeil(d) << endl;
	cout << "������ = " << cvFloor(d) << endl;
	cout << "�ݿø��� = " << cvRound(d) << endl;
	cout << "===============================" << endl;

	// 1-c. ���� ����
	srand((uint)time(NULL));
	int r = rand()%100;
	cout << "���� = " << r << endl;
	cout << "ƽ ī��Ʈ = " << getTickCount() << endl;
	cout << "===============================" << endl;

	// 1-d. �ε� �Ҽ��� cv::Point2f ��ü ���� �� Point ��ü�� ��ȣ ĳ����
	Point2f p2f(9102.1124f, 21350.26134f);
	cout << "Point2f = " << p2f << endl;
	cout << "Point2f to Point = " << Point(p2f) << endl;
	cout << "(Point2f to Point) to Point2f = " << Point2f(Point(p2f)) << endl;
	cout << "===============================" << endl;
}
*/