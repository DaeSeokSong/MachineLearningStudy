/*
#include <iostream>
#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;

int main()
{
	VideoCapture capture("D:\\example\\dataset\\video\\Robin.avi");
	if (!capture.isOpened()) return -1;

	Size size = Size((int)capture.get(CAP_PROP_FRAME_WIDTH), (int)capture.get(CAP_PROP_FRAME_HEIGHT));

	int fourcc = -1;

	double fps = 24;
	bool isColor = true;
	// VideoWriter, .avi Ȯ���ڷ� �ϸ� can't find starting number ���� �߻�
	VideoWriter outputVideo("D:\\example\\dataset\\video\\output.mp4", fourcc, fps, size, isColor);
	if (!outputVideo.isOpened()) return -1;

	if (fourcc != -1)
	{
		imshow("frame", NULL);
		waitKey(100);
	}

	int delay = 1000 / fps;
	Mat frame, grayImage, edgeImage;

	while (true)
	{
		capture >> frame;
		if (frame.empty()) break;

		outputVideo << frame;
		imshow("frame", frame);

		int ckey = waitKey(delay);
		if (ckey == 27) break;
	}

	return 0;
}
*/