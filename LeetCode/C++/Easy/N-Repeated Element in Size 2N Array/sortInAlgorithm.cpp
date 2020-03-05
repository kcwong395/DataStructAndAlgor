static auto _ = []()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	return nullptr;
}();

class Solution {
public:
	int repeatedNTimes(vector<int>& A) {

		sort(A.begin(), A.end());

		int mid = A.size() / 2;

		if (A[mid - 1] == A[mid - 2]) return A[mid - 1];
		return A[mid];

	}
};