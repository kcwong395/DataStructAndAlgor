class Solution {
public:
	int minPathSum(vector<vector<int>>& grid) {

		int m = grid.size(), n = grid[0].size();

		if (m == 0 || n == 0) {
			cout << "No path is available" << endl;
			cout << "The total cost is: 0" << endl;
			return 0;
		}

		int** ans = new int*[m];
		for (int i = 0; i < m; i++) {
			ans[i] = new int[n];
		}

		int** back = new int*[m];
		for (int i = 0; i < m; i++) {
			back[i] = new int[n];
		}

		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (i == 0 && j == 0) {
					ans[0][0] = grid[0][0];
					back[0][0] = 0;
				}
				else if (i == 0) {
					ans[i][j] = grid[i][j] + ans[i][j - 1];
					back[i][j] = 1;
				}
				else if (j == 0) {
					ans[i][j] = grid[i][j] + ans[i - 1][j];
					back[i][j] = 2;
				}
				else {
					if (ans[i - 1][j] < ans[i][j - 1]) {
						ans[i][j] = grid[i][j] + ans[i - 1][j];
						back[i][j] = 2;
					}
					else {
						ans[i][j] = grid[i][j] + ans[i][j - 1];
						back[i][j] = 1;
					}
				}
			}
		}

		cout << "The backtracking path is as follow: ";
		int i = m - 1, j = n - 1;
		while (i >= 0 || j >= 0) {
			if (back[i][j] == 0) {
				cout << "(" << i-- << "," << j-- << ")" << endl;
			}
			else if (back[i][j] == 2) {
				cout << "(" << i-- << "," << j << ") ¡ö ";
			}
			else {
				cout << "(" << i << "," << j-- << ") ¡ö ";
			}
		}

		cout << "The total cost is: " << ans[m - 1][n - 1] << endl;
		return ans[m - 1][n - 1];
	}
};