class Solution {
public:
	bool checkSum(int checker[]) {

		for (int i = 0; i < 9; i++) {
			if (checker[i] > 1) return false;
		}

		return true;

	}

	bool isValidSudoku(vector<vector<char>>& board) {

		for (int i = 0; i < 9; i++) {

			int row[9] = { 0 };
			int col[9] = { 0 };

			for (int j = 0; j < 9; j++) {
				if (board[i][j] > '0' && board[i][j] <= '9') {
					row[board[i][j] - '0' - 1]++;
				}
				if (board[j][i] > '0' && board[j][i] <= '9') {
					col[board[j][i] - '0' - 1]++;
				}
			}

			if (!checkSum(col) || !checkSum(row)) {
				return false;
			}

		}

		for (int h = 0; h < 3; h++) {
			for (int i = 0; i < 3; i++) {
				int mat[9] = { 0 };
				for (int j = 0 + h * 3; j < 3 + h * 3; j++) {
					for (int k = 0 + i * 3; k < 3 + i * 3; k++) {
						if (board[j][k] > '0' && board[j][k] <= '9') {
							mat[board[j][k] - '0' - 1]++;
						}
					}
					if (!checkSum(mat)) {
						return false;
					}
				}
			}
		}

		return true;

	}
};