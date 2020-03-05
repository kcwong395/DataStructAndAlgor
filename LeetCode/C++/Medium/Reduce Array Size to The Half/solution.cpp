static const auto io_sync_off = []()
{
	// turn off sync
	std::ios::sync_with_stdio(false);
	// untie in/out streams
	std::cin.tie(nullptr);
	return nullptr;
}();

class Solution {
public:
	int minSetSize(vector<int>& arr) {

		sort(arr.begin(), arr.end());

		vector<int> cnt;
		int count = 1;
		for (int i = 1; i < arr.size(); i++) {
			if (arr[i] != arr[i - 1]) {
				cnt.push_back(count);
				count = 1;
			}
			else {
				count++;
			}
		}
		cnt.push_back(count);

		sort(cnt.begin(), cnt.end(), greater<int>());

		int ans = 0, n = arr.size();
		for (int i = 0; i < cnt.size(); i++) {
			if (n > arr.size() / 2) {
				n -= cnt[i];
				ans++;
			}
			else {
				break;
			}
		}
		return ans;
	}
};