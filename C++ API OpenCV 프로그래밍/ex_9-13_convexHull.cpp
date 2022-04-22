/*
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

void onMouse(int event, int x, int y, int flags, void* param);

vector<Point> g_points;

int main()
{
	Mat dstImg(Size(512, 512), CV_8UC3, Scalar::all(255));
	imshow("dstImg", dstImg);
	setMouseCallback("dstImg", onMouse, (void*)&dstImg);

	bool bEscKey = false;
	while (!bEscKey)
	{
		int nKey = waitKey(0);
		switch (nKey)
		{
		case 27:
			bEscKey = true;
			break;
		case 'r':
			g_points.clear();
			dstImg = Scalar::all(255);
			break;
		case ' ':
			if (g_points.size() < 1) break;

			// isContourConvex
			// 2D ��ǥ���� contour�� �������� �˻��Ѵ�.
			cout << "isContourConvex(g_points) = " << isContourConvex(g_points) << endl;

			// convexHull
			// �־��� ��ǥ���� ���ϲ���(convex hull)�� ����ؼ� ��ȯ�Ѵ�.
			vector<Point> hull;
			convexHull(g_points, hull);
			drawContours(dstImg, vector<vector<Point>>(1, hull), 0, Scalar(255, 0, 0), 2);

			cout << "isContourConvex(hull) = " << isContourConvex(hull) << endl;

			break;
		}
		imshow("dstImg", dstImg);
	}
	return 0;
}

void onMouse(int event, int x, int y, int flags, void* param)
{
	Mat* data = (Mat*)param;
	Mat dstImg = *data;
	switch (event)
	{
	case EVENT_MOUSEMOVE:
		if (flags & EVENT_FLAG_LBUTTON)
		{
			circle(dstImg, Point(x, y), 2, Scalar::all(0), -1);
			g_points.push_back(Point(x, y));
		}
		break;
	}
	imshow("dstImg", dstImg);
}
*/