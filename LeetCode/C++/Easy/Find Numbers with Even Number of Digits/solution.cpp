class Solution {
public:
	bool isEven(int a) {
		int cnt = 0;
		while (a > 0) {
			a /= 10;
			cnt++;
		}
		return cnt % 2 == 0;
	}
	int findNumbers(vector<int>& nums) {
		int cnt = 0;
		for (int i = 0; i < nums.size(); i++) {
			if (isEven(nums[i])) {
				cnt++;
			}
		}
		return cnt;
	}
};