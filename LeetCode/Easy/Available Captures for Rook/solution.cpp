class Solution {
public:
	int numRookCaptures(vector<vector<char>>& board) {

		int x = -1, y = -1;
		for (int i = 0; i < board.size() && x == -1; i++) {
			for (int j = 0; j < board.size() && x == -1; j++) {
				if (board[i][j] == 'R') {
					x = j;
					y = i;
				}
			}
		}

		int cnt = 0;
		for (int w = x; w >= 0; w--) {
			if (board[y][w] == 'p') {
				cnt++;
				break;
			}
			if (board[y][w] == 'B') break;
		}

		for (int e = x; e < board.size(); e++) {
			if (board[y][e] == 'p') {
				cnt++;
				break;
			}
			if (board[y][e] == 'B') break;
		}

		for (int n = y; n >= 0; n--) {
			if (board[n][x] == 'p') {
				cnt++;
				break;
			}
			if (board[n][x] == 'B') break;
		}

		for (int s = y; s < board.size(); s++) {
			if (board[s][x] == 'p') {
				cnt++;
				break;
			}
			if (board[s][x] == 'B') break;
		}

		return cnt;
	}
};