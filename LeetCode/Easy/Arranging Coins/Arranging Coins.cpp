class Solution {
public:
	int arrangeCoins(int n) {

		// n = (1 + row) * (row / 2.0)
		// then we get row^2 + row - 2n = 0
		// since we only need positive result, so (-1 + sqrt(1 + 4n)) / 2

		return (-1 + sqrt(1 + (long long)8 * n)) / 2;

	}
};