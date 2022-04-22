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

	bool closed = false;
	bool bEscKey = false;
	while (!bEscKey)
	{
		int nKey = waitKey(0);
		switch (nKey)
		{
			case 27 :
				bEscKey = true;
				break;
			case 'r' :
				g_points.clear();
				dstImg = Scalar::all(255);
				break;
			case ' ' :
				if (g_points.size() < 1) break;

				const Point* pts = (const Point*)g_points.data();

				int npts = g_points.size();
				polylines(dstImg, &pts, &npts, 1, closed, Scalar(255, 0, 0), 2);

				// arcLength
				// � �Ǵ� �������� ���̸� ����Ѵ�.
				double length = arcLength(g_points, closed);
				cout << "arcLength = " << length << endl;

				// contourArea
				// ������ ������ ������ ����Ѵ�.
				double area = contourArea(g_points, true);
				cout << "contourArea = " << area << endl;

				// boundingRect
				// �־��� ��ǥ������ �ٿ�� ���簢���� ����� ��ȯ�Ѵ�.
				Rect rect = boundingRect(g_points);
				rectangle(dstImg, rect, Scalar(0, 0, 255), 2);

				// minEnclosingCircle
				// �־��� ��ǥ���� �ѷ��δ� ������ �ּ��� ���� �߽��� center, ������ radius�� ��ȯ�Ѵ�.
				Point2f center;
				float radius;
				minEnclosingCircle(g_points, center, radius);
				circle(dstImg, center, radius, Scalar(0, 255, 0), 2);

				// minAreaRect
				// �־��� ��ǥ���� �ѷ��δ� ������ �ּ��� ȸ���� ����� �簢���� ��ȯ�Ѵ�.
				RotatedRect minRect = minAreaRect(g_points);
				Point2f rectPoints[4];
				minRect.points(rectPoints);
				for (int i = 0; i < 4; i++) line(dstImg, rectPoints[i], rectPoints[(i + 1) % 4], Scalar(255, 0, 255), 2);

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
		case EVENT_MOUSEMOVE :
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