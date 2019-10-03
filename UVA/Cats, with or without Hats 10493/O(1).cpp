#include "today.h"
#include <iostream>
using namespace std;

int yyyy;
int mm;
int dd;

int main() {
	int cyy = ThisYear();
	int cmm = ThisMonth();
	int cdd = ThisDay();

	cout << "Please enter your birth date(yyyy mm dd) :";
	cin >> yyyy >> mm >> dd;

	if (yyyy < 1990) {
		cout << "Year not in range!!\n";
	}
	else if (1 > mm || mm > 12) {
		cout << "Invalid date!!\n";
	}
	else if (1 > dd || dd > 32) {
		cout << "Invalid date!!\n";
	}

	else if (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12) {
		if (1 > dd || dd > 31) {
			cout << "Invalid date!!\n";
		}
	}
	else if (mm == 4 || mm == 6 || mm = 9 || mm == 11) {
		if (1 > dd || dd > 30) {
			cout << "Invalid date!!\n";
		}
	}
	else if (yyyy > cyy || mm > cmm || dd > cdd) {
		cout << "Invalid date!!\n";
	}
	else if (yyyy / 4.0 != yyyy / 4) {
		if (mm == 2) {
			if (1 > dd || dd >= 29) {
				cout << "You are not born yet!!\n";
			}
		}
	}
	else {
		cout << "Your birthday was on" << dd << mm << yyyy << ".\n";
	}



	return 0;
}