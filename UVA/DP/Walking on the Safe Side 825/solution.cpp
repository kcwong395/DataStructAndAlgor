#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
	int numCase, W, N;
	cin >> numCase;
	while (numCase--) {
		cin >> W >> N;
		cin.ignore();
		string input;
		int** ans = new int*[W];
		for (int i = 0; i < W; i++) {
			ans[i] = new int[N];
			for (int j = 0; j < N; j++) ans[i][j] = -1;
			getline(cin, input);
			stringstream ss(input);
			int tmpC;
			ss >> tmpC;
			while (ss >> tmpC) {
				ans[i][tmpC - 1] = 0;
			}
		}

		for (int i = 0; i < W; i++) {
			for (int j = 0; j < N; j++) {
				if (ans[i][j] == 0) continue;
				else if (i == 0 && j == 0) {
					ans[i][j] = 1;
				}
				else if (i == 0) {
					ans[i][j] = ans[i][j - 1];
				}
				else if (j == 0) {
					ans[i][j] = ans[i - 1][j];
				}
				else {
					ans[i][j] = ans[i - 1][j] + ans[i][j - 1];
				}
			}
		}

		cout << ans[W - 1][N - 1] << endl;
		if (numCase) cout << endl;
	}

	return 0;
}