class Solution {
public:
	bool isPalindrome(int x) {

		if (x < 0) return false;

		int temp = x;
		long long y = 0;

		while (temp > 0) {
			y = y * 10 + temp % 10;
			temp /= 10;
		}

		return y == x;

	}
};