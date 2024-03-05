#include <iostream>
using namespace std;

int main()
{

	int nMatematika, nFisika, nRerata;
	string status;

	cout << "Masukan nilai Matematika = ";
	cin >> nMatematika;

	cout << "Masukan nilai Fisika = ";
	cin >> nFisika;

	nRerata = (nMatematika + nFisika) / 2;


	if (nRerata > 60) {
		status = "LULUS";
	}

	else if (nMatematika > 70) {
		status = "LULUS";
	}
	else {
		status = "TIDAK LULUS";
	}

	cout << "Reratanya adalah = " << nRerata << endl;
	cout << "Statusnya adalah = " << status << endl;

	return 0;

}
