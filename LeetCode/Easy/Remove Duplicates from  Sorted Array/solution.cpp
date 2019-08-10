class Solution {
public:
	int removeDuplicates(vector<int>& nums) {

		if (nums.size() == 0) return 0;

		int validI = 1;

		for (int i = 1; i < nums.size(); i++) {
			if (nums[i] != nums[i - 1]) {
				nums[validI++] = nums[i];
			}
		}

		return validI;

	}
};