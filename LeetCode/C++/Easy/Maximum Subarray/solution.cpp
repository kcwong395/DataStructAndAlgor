class Solution {
public:
	int maxSubArray(vector<int>& nums) {

		int pre = nums[0], cur, maxi = nums[0];

		for (int i = 1; i < nums.size(); i++) {
			// cur donates the best solution if we include this node
			cur = max(nums[i], pre + nums[i]);
			pre = cur;
			maxi = max(maxi, cur);
		}

		return maxi;
	}
};