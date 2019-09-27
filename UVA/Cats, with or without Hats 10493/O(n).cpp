#include<iostream>

using namespace std;

int main() {
	while (true) {
		int n, m;
		cin >> n >> m;

		if (n == 0) break;

		if (n == 1 && m > 1) {
			cout << n << " " << m << " " << "Impossible" << endl;
			continue;
		}

		int size = 1, tmp = 1;
		bool found = false, repeated = false;

		for (int i = 0; tmp <= m && !repeated; i++) {
			if (tmp == m) {
				if (found) {
					repeated = true;
				}
				else {
					found = true;
				}
			}
			tmp = (i + 1) * n - i;
			size = i * n + 1;
		}

		if (!found) {
			cout << n << " " << m << " " << "Impossible" << endl;
		}
		else {
			if (repeated)
				cout << n << " " << m << " " << "Multiple" << endl;
			else
				cout << n << " " << m << " " << size << endl;
		}
	}
}