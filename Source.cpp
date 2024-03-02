#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	setlocale(LC_ALL, "");
	

	int pontok[15] = { 7, 34, 56, 4, 57, 45, 67, 6, 43, 32, 33, 99, 33, 100, 11 };
	int i = 0;
	int sum=0;
	float avrage = 0;
	int max = 100;

	//tömb kiírás

	cout.setf(ios::left);
	cout << "Tanulók pontjai\n\n";
	for (i = 0; i < 15; i++) {
		cout << setw(2) << i + 1 << setw(6) << ". elem: " << setw(2) << pontok[i] << endl;
	}

	//átlag 

	for (i = 0; i < 15; i++) {
		sum += pontok[i];
	}
	avrage = (float)sum / 15;
	cout << "\n";
	cout <<"A pontok átlaga: " << avrage << endl;

	//max pont
	cout << "\n";
	for (i = 0; i < 15; i++) {
		if (pontok[i] == max) {
			cout << "Max pontot elért: " << i + 1 << ". hallgató" << endl;
		}
	}

	system("pause");
	return 0;
}