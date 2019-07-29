class Solution {
public:
	int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {

		int sum = 0, r = grid.size(), c = grid[0].size();

		for (int i = 0; i < r; i++) {
			int horiMax = -1;
			for (int h = 0; h < c; h++) {
				horiMax = max(horiMax, grid[i][h]);
			}
			for (int j = 0; j < r; j++) {
				int vertiMax = -1;
				for (int h = 0; h < c; h++) {
					vertiMax = max(vertiMax, grid[h][j]);
				}
				sum += min(vertiMax, horiMax) - grid[i][j];
			}
		}

		return sum;

	}
};