static auto _ = []()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	return nullptr;
}();

class Solution {
public:
	int repeatedNTimes(vector<int>& A) {

		int nums[10000] = { 0 };

		for (int i = 0; i < A.size(); i++) {
			nums[A[i]]++;
			if (nums[A[i]] > 1) return A[i];
		}

		return 0;

	}
};