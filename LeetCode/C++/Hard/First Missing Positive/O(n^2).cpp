class Solution {
public:
	int firstMissingPositive(vector<int>& nums) {

		int ans = 1, i = 0;

		while (i < nums.size())
		{
			if (ans == nums[i])
			{
				ans++;
				i = 0;
			}
			else
			{
				i++;
			}
		}

		return ans;

	}
};