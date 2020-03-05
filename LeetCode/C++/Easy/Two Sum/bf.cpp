class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {

		int n = nums.size();
		vector<int> v;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (i != j && nums[i] + nums[j] == target) {
					v.push_back(i); v.push_back(j);
					return v;
				}
			}
		}

		return v;

	}
};