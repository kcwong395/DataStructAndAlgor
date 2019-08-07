static int fast = [] {
	ios::sync_with_stdio(0);
	cin.tie(0);
	return 0;
}();

class Solution {
public:
	vector<int> sortedSquares(vector<int>& A) {
		vector<int> ans(A.size(), 0);
		int i = 0, j = A.size() - 1;
		for (int k = j; k >= 0; k--) {
			if (abs(A[i]) > abs(A[j])) {
				ans[k] = A[i] * A[i];
				i++;
			}
			else {
				ans[k] = A[j] * A[j];
				j--;
			}
		}
		return ans;
	}
};