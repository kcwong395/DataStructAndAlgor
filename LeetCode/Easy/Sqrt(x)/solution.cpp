class Solution {
public:
	int mySqrt(int x) {

		int low = 0, high = x / 2 + 1;

		while (low <= high) {
			long long mid = (low + high) / 2;
			if (mid * mid == x || (mid * mid < x && (mid + 1) * (mid + 1) > x)) return mid;
			if (mid * mid > x) high = mid - 1;
			else low = mid + 1;
		}

		return 0;

	}
};