class Solution {
public:
	int reverse(int x) {

		if (x > INT_MAX || x < INT_MIN) return 0;

		long long y = 0;

		if (x > 0) {
			for (; x > 0; x /= 10) {
				if ((y = y * 10 + (x % 10)) > INT_MAX)
					return 0;
			}
		}
		else {
			for (; x < 0; x /= 10) {
				if ((y = y * 10 + (x % 10)) < INT_MIN)
					return 0;
			}
		}

		return y;

	}
};