#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	setlocale(LC_ALL, "");

	int scores[15] = { 7, 34, 56, 4, 57, 45, 67, 6, 43, 32, 33, 99, 33, 100, 11 };
	int i = 0;
	int sum=0;
	float avrage = 0;
	int max = 100;

	//print array

	cout.setf(ios::left);
	cout << "Students scores\n\n";
	for (i = 0; i < 15; i++) {
		cout << setw(2) << i + 1 << setw(6) << ". student: " << setw(2) << scores[i] << endl;
	}

	//avrage 

	for (i = 0; i < 15; i++) {
		sum += scores[i];
	}
	avrage = (float)sum / 15;
	cout << "\n";
	cout <<"The avrage of points: " << avrage << endl;

	//max score
	cout << "\n";
	for (i = 0; i < 15; i++) {
		if (scores[i] == max) {
			cout << "Achieved max score: " << i + 1 << ". student" << endl;
		}
	}

	//achieved exactly 57 points
	cout << "\n";
	for (i = 0; i < 15; i++) {
		if (scores[i] == 57) {
			cout << "Achieved 57 points: " << i + 1 << ". student" << endl;
		}
	}


	system("pause");
	return 0;
}