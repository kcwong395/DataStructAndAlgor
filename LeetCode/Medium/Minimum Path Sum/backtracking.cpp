class Solution {
public:
	int minPathSum(vector<vector<int>>& grid) {

		ios_base::sync_with_stdio(false);
		cin.tie(NULL);

		int m = grid.size(), n = grid[0].size();

		if (m == 0 || n == 0) return 0;

		int** ans = new int*[m];
		for (int i = 0; i < m; i++) {
			ans[i] = new int[n];
		}

		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (i == 0 && j == 0) {
					ans[0][0] = grid[0][0];
				}
				else if (i == 0) {
					ans[i][j] = grid[i][j] + ans[i][j - 1];
				}
				else if (j == 0) {
					ans[i][j] = grid[i][j] + ans[i - 1][j];
				}
				else {
					ans[i][j] = grid[i][j] + min(ans[i - 1][j], ans[i][j - 1]);
				}
			}
		}

		int i = m - 1, j = n - 1;
		while (i >= 0 || j >= 0) {
			if (i == 0 && j == 0) {
				cout << "(" << i-- << "," << j-- << ")" << endl;
			}
			else if (i == 0) {
				cout << "(" << i << "," << j-- << ") ¡ö ";
			}
			else if (j == 0) {
				cout << "(" << i-- << "," << j << ") ¡ö ";
			}
			else {
				if (ans[i - 1][j] > ans[i][j - 1]) {
					cout << "(" << i << "," << j-- << ") ¡ö ";
				}
				else {
					cout << "(" << i-- << "," << j << ") ¡ö ";
				}
			}
		}

		return ans[m - 1][n - 1];
	}
};