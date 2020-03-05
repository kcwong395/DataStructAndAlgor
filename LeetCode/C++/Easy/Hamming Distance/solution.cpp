class Solution {
public:
	int hammingDistance(int x, int y) {

		// x ^ y donates nmumbers of bit different
		int sum = 0, nums = x ^ y;

		// nums &= nums-1 decrease number of 1's digit by one
		for (nums = x ^ y; nums; nums &= nums - 1)
			sum++;

		return sum;

	}
};