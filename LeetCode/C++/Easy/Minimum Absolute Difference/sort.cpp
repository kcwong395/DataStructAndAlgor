static auto _______ = []() {
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	std::cin.tie(nullptr);
	return 0;
}();

class Solution {
public:
	vector<vector<int>> minimumAbsDifference(vector<int>& arr) {

		sort(arr.begin(), arr.end());
		vector<vector<int>> v;

		int mini = arr[1] - arr[0];
		vector<int> tmp{ arr[0], arr[1] };
		v.push_back(tmp);

		for (int i = 1; i < arr.size() - 1; i++) {
			if (arr[i + 1] - arr[i] < mini) {
				mini = arr[i + 1] - arr[i];
				v.clear();
				vector<int> tmp2{ arr[i], arr[i + 1] };
				v.push_back(tmp2);
			}
			else if (arr[i + 1] - arr[i] == mini) {
				vector<int> tmp2{ arr[i], arr[i + 1] };
				v.push_back(tmp2);
			}
		}

		return v;
	}
};