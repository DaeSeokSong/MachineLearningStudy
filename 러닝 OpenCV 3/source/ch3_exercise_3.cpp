/*
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;

class Prtcls {
private:
	int clsNum;

public:
	void printMsg();

	Prtcls(int num) {
		this->clsNum = num;
		cout << "Create Prtcls\n" << endl;
	}
	~Prtcls() {
		cout << "Delete Prtcls\n" << endl;
	}

};
void Prtcls::printMsg() {
	cout << "Print Message, Accept request" << endl;
	cout << "Class Number = " << clsNum << "\n" << endl;
}

int main() {
	cv::Ptr<Prtcls> pPrt = new Prtcls(0);
	cout << "�ѤѤѤѤ�This is pPrt1�ѤѤѤѤ�\n" << endl;
	pPrt->printMsg();

	cv::Ptr<Prtcls> pPrt2 = pPrt;
	cout << "�ѤѤѤѤ�This is pPrt2�ѤѤѤѤ�\n" << endl;
	while (true) {
		pPrt->printMsg();
		if (cin.get() == 's') break;
	}

	cv::Ptr<Prtcls> pPrt3 = pPrt;
	cout << "�ѤѤѤѤ�This is pPrt3�ѤѤѤѤ�\n" << endl;
	pPrt3->printMsg();

	// new �� �޸� �Ҵ��ϰ� �Ǹ� delete ���ֱ� ������ �޸𸮿� ��� �����ִ�.
	// �� �Ҹ��ڰ� ȣ���� �� �ȴ�.
	Prtcls* pPrt = new Prtcls(0);
	pPrt->printMsg();
}
*/