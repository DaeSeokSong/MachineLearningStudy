#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {
	VideoCapture camera;
	camera.open(0);

	if (!camera.isOpened()) {
		cout << "������� ī�޶� �ν� ���� �������" << endl;
		return -1;
	}

	// BGR
	Mat frame;

	// Gray
	Mat frameGray;

	// Contour
	Mat frameSobelX;
	Mat frameSobelY;
	Mat frameCannyX;
	Mat frameCannyY;
	Mat frameCanny;
	Mat sumCanny;

	while (true) {
		camera >> frame;
		if (frame.empty()) break;

		cvtColor(frame, frameGray, COLOR_BGR2GRAY);

		// Sobel(�Է�, ���, �������(-1 == �Է°� ����), X �̺� ����(ksize���� �۰�), Y �̺� ����(ksize���� �۰�));
		Sobel(frameGray, frameSobelX, -1, 1, 0);
		Sobel(frameGray, frameSobelY, -1, 0, 1);
		// Canny(�Է�, ���, 1�� �Ӱ谪, 2�� �Ӱ谪);
		Canny(frameSobelX, frameCannyX, 50, 127);
		Canny(frameSobelY, frameCannyY, 50, 127);
		Canny(frameGray, frameCanny, 50, 127);

		imshow("Display <ORIGIN>", frame);
		imshow("Display <CANNY>", frameCanny);
		imshow("Display <CANNY X>", frameCannyX);
		imshow("Display <CANNY Y>", frameCannyY);
		imshow("Display <CANNY X + Y>", frameCannyX + frameCannyY);

		if (waitKey(1) == 27) break;
	}

	return 0;
}