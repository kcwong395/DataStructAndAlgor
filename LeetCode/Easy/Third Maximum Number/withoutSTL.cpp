class Solution {
public:
	int thirdMax(vector<int>& nums) {

		// the array is guarenteed to be a non-empty array 
		// so nums[0] will not induce an error
		int first = nums[0], second = nums[0], third = nums[0];
		int valid = 1;

		for (int i = 1; i < nums.size(); i++)
		{
			if (valid == 1 && nums[i] != third) 
			{
				if (nums[i] > third) 
				{
					second = nums[i];
				}
				else 
				{
					third = nums[i];
				}
				valid++;
			}
			else if (valid == 2 && nums[i] != second && nums[i] != third) 
			{
				if (nums[i] > third) 
				{
					if (nums[i] > second) 
					{
						first = nums[i];
					}
					else 
					{
						first = second;
						second = nums[i];
					}
				}
				else 
				{
					first = second;
					second = third;
					third = nums[i];
				}
				valid++;
			}
			else if (nums[i] != third && nums[i] != second && nums[i] != first) 
			{
				if (nums[i] > third) 
				{
					if (nums[i] > second) 
					{
						if (nums[i] > first) 
						{
							third = second;
							second = first;
							first = nums[i];
						}
						else 
						{
							third = second;
							second = nums[i];
						}
					}
					else 
					{
						third = nums[i];
					}
				}
			}
		}

		if (valid == 2) return second;
		return third;

	}
};