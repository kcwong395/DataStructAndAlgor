class Solution {
public:
	bool isPalindrome(int x) {

		if (x < 0) return false;

		if (x < 10) return true;

		int div = 1000000000;
		// find suitable div to extract the first digit
		// error when x < 10
		while (x % div == x) div /= 10;

		// extract msb and lsb to verify
		while (x > 0) {
			if (x / div != x % 10) return false;
			x -= (x / div) * div + x % 10;
			x /= 10;
			div /= 100;
		}

		return true;

	}
};