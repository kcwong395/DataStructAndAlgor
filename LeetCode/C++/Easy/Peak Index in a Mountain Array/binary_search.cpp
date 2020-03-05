static auto _ = []()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	return nullptr;
}();

class Solution {
public:
	int peakIndexInMountainArray(vector<int>& A) {

		int s = 0, e = A.size() - 1;

		while (s <= e) {

			int i = (s + e) / 2;

			if (A[i] > A[i - 1] && A[i] > A[i + 1])
			{
				return i;
			}
			else
			{
				A[i] < A[i - 1] ? e = i - 1 : s = i + 1;
			}
		}

		return 0;

	}
};