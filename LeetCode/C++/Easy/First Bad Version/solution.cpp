// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
	int firstBadVersion(int n) {

		long long low = 1;
		int high = n;

		while (low <= high) {

			long long mid = (low + high) / 2;

			if (isBadVersion(mid)) { // bad version
				if (mid == 1 || !isBadVersion(mid - 1)) return mid;
				high = mid - 1;
			}
			else low = mid + 1;
		}

		return n;

	}
};