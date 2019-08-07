class Solution {
public:
	int firstMissingPositive(vector<int>& nums) {

		int ans = 1, i = 0, end = nums.size() - 1;

		while (i <= end)
		{
			if (nums[i] < 1)
			{
				int temp = nums[i];
				nums[i] = nums[end];
				nums[end--] = temp;
			}
			else if (nums[i] == ans)
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