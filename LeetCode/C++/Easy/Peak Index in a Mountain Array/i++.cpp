int optimization = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	return 0;
}();

class Solution {
public:
	int peakIndexInMountainArray(vector<int>& A) {

		int i = 1;

		for (; i < A.size() && A[i] > A[i - 1]; i++);

		return i - 1;

	}
};