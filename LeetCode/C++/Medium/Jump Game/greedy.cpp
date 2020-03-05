static int a = []() {ios::sync_with_stdio(NULL); return 0; }();

class Solution {
public:
	bool canJump(vector<int>& nums) {

		int maxi = nums[0];

		for (int i = 0; i <= maxi; i++) {

			if (maxi >= nums.size() - 1) return true;

			maxi = max(maxi, i + nums[i]);
		}

		return false;
	}
};