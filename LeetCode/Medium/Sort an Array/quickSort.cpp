class Solution {
public:
	int partition(vector<int> &nums, int s, int e) {

		bool done = false;
		int i = s + 1, j = e;

		while (!done) 
		{
			for (; i < j && nums[i] <= nums[s]; i++);
			for (; nums[j] > nums[s]; j--);
			if (i < j) {
				int t = nums[i];
				nums[i] = nums[j];
				nums[j] = t;
			}
			else {
				done = true;
			}
		}

		int t = nums[j];
		nums[j] = nums[s];
		nums[s] = t;

		return j;

	}

	void quickS(vector<int>& nums, int s, int e) {
		if (s < e) 
		{
			int p = partition(nums, s, e);
			quickS(nums, s, p - 1);
			quickS(nums, p + 1, e);
		}
	}

	vector<int> sortArray(vector<int>& nums) {

		quickS(nums, 0, nums.size() - 1);

		return nums;

	}
};