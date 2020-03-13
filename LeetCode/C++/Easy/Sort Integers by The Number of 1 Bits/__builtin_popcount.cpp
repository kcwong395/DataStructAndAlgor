class Solution {
public:
	vector<int> sortByBits(vector<int>& arr) {

		auto count = [](int a, int b) {
			int i = __builtin_popcount(a), j = __builtin_popcount(b);
			return i == j ? a < b : i < j;
		};

		sort(arr.begin(), arr.end(), count);

		return arr;
	}
};