class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {

		map<int, int> m; // val, idx

		for (int i = 0; i < nums.size(); i++) {
			int c = target - nums[i];
			map<int, int>::iterator found = m.find(c);
			if (found != m.end()) {
				return { found->second, i };
			}
			else {
				m[nums[i]] = i;
			}
		}

		return { -1, -1 };
	}
};