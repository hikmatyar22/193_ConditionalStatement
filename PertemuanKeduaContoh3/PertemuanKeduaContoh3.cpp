#include <iostream>
using namespace std;

int main()
{

	int nBilA;
	int nBilB;
	string status;

	srand(time(0));

	nBilA = rand() % 10;
	nBilB = rand() % 10;

	if (nBilA == nBilB) {
		status = "Bilangan A sama besar dengan Bilangan B";
	}

	else if (nBilA > nBilB) {
		status = "Bilangan A lebih besar dari Bilangan B";
	}
	else  {
		status = "Bilangan A lebih kecil dari Bilangan B";
	}

	cout << "Bilangan A adalah = " << nBilA << endl;
	cout << "Bilangan B adalah = " << nBilB << endl;
	cout << "Status bilangannya adalah = " << status << endl;

	return 0;

}