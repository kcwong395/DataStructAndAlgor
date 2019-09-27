#include<iostream>

using namespace std;

int main() {
	while (true) {
		int n, m;
		cin >> n >> m;

		if (n == 0) break;

		if (n == 1) {
			if (m == 1)
				cout << n << " " << m << " " << "Multiple" << endl;
			else
				cout << n << " " << m << " " << "Impossible" << endl;
			continue;
		}

		if ((m - n) % (n - 1) == 0) {
			cout << n << " " << m << " " << ((m - n) / (n - 1)) * n + 1 + n << endl;
		}
		else {
			cout << n << " " << m << " " << "Impossible" << endl;
		}
	}
}