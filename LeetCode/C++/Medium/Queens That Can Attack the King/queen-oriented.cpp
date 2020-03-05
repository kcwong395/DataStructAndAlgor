class Solution {
public:
	vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {

		vector<vector<int>> ans;
		for (int i = 0; i < 8; i++) {
			ans.push_back({ -1 , -1 });
		}

		for (int i = 0; i < queens.size(); i++) {
			if (queens[i][0] == king[0]) {
				// right
				if (queens[i][1] > king[1]) {
					if (ans[0][1] == -1 || queens[i][1] < ans[0][1]) {
						ans[0][0] = queens[i][0], ans[0][1] = queens[i][1];
					}
				}
				// left
				else if (queens[i][1] < king[1]) {
					if (queens[i][1] > ans[1][1]) {
						ans[1][0] = queens[i][0], ans[1][1] = queens[i][1];
					}
				}
			}
			else if (queens[i][1] == king[1]) {
				// up
				if (queens[i][0] < king[0] && queens[i][1] == king[1]) {
					if (queens[i][0] > ans[2][0]) {
						ans[2][0] = queens[i][0], ans[2][1] = queens[i][1];
					}
				}
				// down
				else if (queens[i][0] > king[0] && queens[i][1] == king[1]) {
					if (ans[3][1] == -1 || queens[i][0] < ans[3][0]) {
						ans[3][0] = queens[i][0], ans[3][1] = queens[i][1];
					}
				}
			}
			else if (abs(queens[i][0] - king[0]) == abs(queens[i][1] - king[1])) {
				// nw
				if (queens[i][0] < king[0] && queens[i][1] < king[1]) {
					if (queens[i][0] > ans[4][0]) {
						ans[4][0] = queens[i][0], ans[4][1] = queens[i][1];
					}
				}
				// ne
				else if (queens[i][0] < king[0] && queens[i][1] > king[1]) {
					if (ans[5][1] == -1 || queens[i][1] < ans[5][1]) {
						ans[5][0] = queens[i][0], ans[5][1] = queens[i][1];
					}
				}
				// sw
				else if (queens[i][0] > king[0] && queens[i][1] < king[1]) {
					if (queens[i][1] > ans[6][1]) {
						ans[6][0] = queens[i][0], ans[6][1] = queens[i][1];
					}
				}
				// se
				else if (queens[i][0] > king[0] && queens[i][1] > king[1]) {
					if (ans[7][1] == -1 || queens[i][0] < ans[7][0]) {
						ans[7][0] = queens[i][0], ans[7][1] = queens[i][1];
					}
				}
			}
		}

		vector<vector<int>> tmp;
		for (int i = 0; i < 8; i++) {
			if (ans[i][0] != -1) {
				tmp.push_back(ans[i]);
			}
		}

		return tmp;
	}
};