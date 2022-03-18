/*
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;

int main() {
	cv::DataType<int> i;
	cout << "channels, ���� ���� = " << i.channels << endl;
	cout << "depth, OpenCV�� ����ϴ� ������ Ÿ�� �ĺ��� = " << i.depth << endl;
	cout << "fmt, ������ ���� ���� ǥ���� = " << i.fmt << endl;
	cout << "generic_type, core.hpp�� ���ǵ� ��� Ÿ���� 0�� �����Ƿ� = " << i.generic_type << endl;
	cout << "type = " << i.type << endl;
	cout << '\n';

	cv::DataType<float> f;
	cout << "channels, ���� ���� = " << f.channels << endl;
	cout << "depth, OpenCV�� ����ϴ� ������ Ÿ�� �ĺ��� = " << f.depth << endl;
	cout << "fmt, ������ ���� ���� ǥ���� = " << f.fmt << endl;
	cout << "generic_type, core.hpp�� ���ǵ� ��� Ÿ���� 0�� �����Ƿ� = " << f.generic_type << endl;
	cout << "type = " << f.type << endl;
	cout << '\n';

	cv::DataType<char> c; // string�� �ȉ�
	cout << "channels, ���� ���� = " << c.channels << endl;
	cout << "depth, OpenCV�� ����ϴ� ������ Ÿ�� �ĺ��� = " << c.depth << endl;
	cout << "fmt, ������ ���� ���� ǥ���� = " << c.fmt << endl;
	cout << "generic_type, core.hpp�� ���ǵ� ��� Ÿ���� 0�� �����Ƿ� = " << c.generic_type << endl;
	cout << "type = " << c.type << endl;
	cout << '\n';

	// OpenCV���� ���ǵ� ���������� depth�� type ���� ����.
	cv::DataType<cv::Rect> r;
	cout << "channels, ���� ���� = " << r.channels << endl;
	cout << "fmt, ������ ���� ���� ǥ���� = " << r.fmt << endl;
	cout << "generic_type, core.hpp�� ���ǵ� ��� Ÿ���� 0�� �����Ƿ� = " << r.generic_type << endl;
	cout << '\n';

	cv::DataType<cv::Size> s;
	cout << "channels, ���� ���� = " << s.channels << endl;
	cout << "fmt, ������ ���� ���� ǥ���� = " << s.fmt << endl;
	cout << "generic_type, core.hpp�� ���ǵ� ��� Ÿ���� 0�� �����Ƿ� = " << s.generic_type << endl;
}
*/