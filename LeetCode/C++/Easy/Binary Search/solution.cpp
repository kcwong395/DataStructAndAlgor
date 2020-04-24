int optimization = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	return 0;
}();

class Solution {
public:
	int search(vector<int>& nums, int target) {

		int high = nums.size() - 1;
		int low = 0;

		while (low <= high) {

			int mid = (high + low) / 2;

			if (nums[mid] == target) return mid;
			if (nums[mid] > target) high = mid - 1;
			else low = mid + 1;
		}

		return -1;

	}
};