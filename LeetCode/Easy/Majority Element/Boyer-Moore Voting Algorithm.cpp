class Solution {
public:
	int majorityElement(vector<int>& nums) {

		int can = 0, cnt = 0;

		for (int i = 0; i < nums.size(); i++) {
			if (cnt == 0) {
				can = nums[i];
				cnt++;
			}
			else {
				nums[i] == can ? cnt++ : cnt--;
			}
		}

		return can;

	}
};