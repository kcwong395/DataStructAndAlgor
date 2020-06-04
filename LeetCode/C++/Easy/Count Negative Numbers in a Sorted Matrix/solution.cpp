class Solution {

public:
	int countNegatives(vector<vector<int>>& grid) {
		int sum = 0;
		int n = grid[0].size();
		for (int i = 0; i < grid.size(); i++) {
			int s = 0, e = n - 1;
			while (s <= e) {
				int mid = (s + e) / 2;
				if (grid[i][mid] < 0) {
					if (mid == 0 || grid[i][mid - 1] >= 0) {
						sum += n - mid;
						break;
					}
					e = mid - 1;
				}
				else {
					s = mid + 1;
				}
			}
		}
		return sum;
	}
};

static const auto fast = []() {ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); return nullptr; }();