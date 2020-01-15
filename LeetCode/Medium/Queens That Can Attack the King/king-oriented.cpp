class Solution {
public:
	vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {

		char chessBoard[8][8] = { 'N' };
		for (int i = 0; i < queens.size(); i++) {
			chessBoard[queens[i][0]][queens[i][1]] = 'Q';
		}

		vector<vector<int>> ans;
		// upward
		for (int i = king[0] - 1; i >= 0; i--) {
			if (chessBoard[i][king[1]] == 'Q') {
				ans.push_back({ i, king[1] });
				break;
			}
		}
		// downward
		for (int i = king[0] + 1; i < 8; i++) {
			if (chessBoard[i][king[1]] == 'Q') {
				ans.push_back({ i, king[1] });
				break;
			}
		}
		// right
		for (int i = king[1] + 1; i < 8; i++) {
			if (chessBoard[king[0]][i] == 'Q') {
				ans.push_back({ king[0], i });
				break;
			}
		}
		// left
		for (int i = king[1] - 1; i >= 0; i--) {
			if (chessBoard[king[0]][i] == 'Q') {
				ans.push_back({ king[0], i });
				break;
			}
		}
		// nw
		for (int i = 1; i <= min(king[0], king[1]); i++) {
			if (chessBoard[king[0] - i][king[1] - i] == 'Q') {
				ans.push_back({ king[0] - i, king[1] - i });
				break;
			}
		}
		// ne
		for (int i = 1; i <= min(king[0], 7 - king[1]); i++) {
			if (chessBoard[king[0] - i][king[1] + i] == 'Q') {
				ans.push_back({ king[0] - i, king[1] + i });
				break;
			}
		}
		// sw
		for (int i = 1; i <= min(7 - king[0], king[1]); i++) {
			if (chessBoard[king[0] + i][king[1] - i] == 'Q') {
				ans.push_back({ king[0] + i, king[1] - i });
				break;
			}
		}
		// se
		for (int i = 1; i <= min(7 - king[0], 7 - king[1]); i++) {
			if (chessBoard[king[0] + i][king[1] + i] == 'Q') {
				ans.push_back({ king[0] + i, king[1] + i });
				break;
			}
		}

		return ans;
	}
};