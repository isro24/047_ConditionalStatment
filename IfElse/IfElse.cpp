#include <iostream>
using namespace std;

int main()
{
	double nilaiMatematika, nilaiFisika, rerata;
	string status;

	cout << "Masukkan nilai Matematika : ";
	cin >> nilaiMatematika;
	cout << "Masukkan Nilai Fisika : ";
	cin >> nilaiFisika;

	rerata = (nilaiMatematika + nilaiFisika) / 2;

	if (rerata >= 60 || nilaiMatematika > 70) {
		status = "Lulus";
	}
	else {
		status = "Tidak lulus";
	}

	cout << "Status Kelulusan adalah : " << status << endl;