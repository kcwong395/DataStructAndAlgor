class Solution {
public:
	int searchInsert(vector<int>& nums, int target) {

		int high = nums.size() - 1, low = 0;

		if (target > nums[high]) return high + 1;

		while (low <= high) {

			int mid = (low + high) / 2;

			if (mid == 0) return nums[0] < target ? 1 : 0;

			if (target <= nums[mid] && target > nums[mid - 1]) {
				return mid;
			}
			else if (target > nums[mid]) {
				low = mid + 1;
			}
			else {
				high = mid - 1;
			}
		}

		return 0;

	}
};