auto ds = []() {
	std::ios::sync_with_stdio(0), std::cin.tie(0), std::cout.tie(0);
	return 0;
}();

class Solution {
public:
	bool match(vector<vector<char>>& board, string word, int i, int j, int idx) {

		if (i >= board.size() || i < 0 || j < 0 || j >= board[i].size()) return false;

		if (board[i][j] != word[idx]) return false;

		board[i][j] = '.';
		idx++;

		if (idx == word.length()) return true;

		if (match(board, word, i + 1, j, idx)) {
			return true;
		}

		if (match(board, word, i - 1, j, idx)) {
			return true;
		}

		if (match(board, word, i, j - 1, idx)) {
			return true;
		}

		if (match(board, word, i, j + 1, idx)) {
			return true;
		}

		board[i][j] = word[idx - 1];

		return false;
	}

	bool exist(vector<vector<char>>& board, string word) {
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
		for (int i = 0; i < board.size(); i++) {
			for (int j = 0; j < board[i].size(); j++) {
				if (board[i][j] == word[0]) {
					if (match(board, word, i, j, 0)) {
						return true;
					}
				}
			}
		}
		return false;
	}
};