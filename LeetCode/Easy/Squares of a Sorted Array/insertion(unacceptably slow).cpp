static int fast = [] {
	ios::sync_with_stdio(0);
	cin.tie(0);
	return 0;
}();

class Solution {
public:
	vector<int> sortedSquares(vector<int>& A) {
		int n = A.size();
		if (n != 0) {
			A[0] *= A[0];
			for (int i = 1; i < n; i++) {
				A[i] *= A[i];
				int t = A[i];
				int j = i - 1;
				for (; j >= 0 && A[j] > t; j--)
					A[j + 1] = A[j];
				A[j + 1] = t;
			}
		}
		return A;
	}
};