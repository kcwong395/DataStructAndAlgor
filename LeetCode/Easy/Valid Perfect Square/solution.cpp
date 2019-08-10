class Solution {
public:
	bool isPerfectSquare(int num) {

		if (num == 0) return false;

		int low = 0;
		long long high = num / 2 + 1;

		while (low <= high) {

			long long mid = (low + high) / 2;

			if (mid * mid == num) return true;
			else if (mid * mid < num) low = mid + 1;
			else high = mid - 1;

		}

		return false;

	}
};