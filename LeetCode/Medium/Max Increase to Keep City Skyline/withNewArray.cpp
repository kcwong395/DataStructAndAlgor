class Solution {
public:
	int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {

		int sum = 0, r = grid.size(), c = grid[0].size();

		vector<int> colMax(r, 0);
		vector<int> rowMax(c, 0);

		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				rowMax[i] = max(rowMax[i], grid[i][j]);
				colMax[i] = max(colMax[i], grid[j][i]);
			}
		}

		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				sum += min(colMax[j], rowMax[i]) - grid[i][j];
			}
		}

		return sum;

	}
};