class Solution {
public:
	int maximum69Number(int num) {
		int tmp = num, divisor = 1000;
		while (divisor > 0) {
			int q = tmp / divisor;
			if (q == 6) {
				num += 3 * divisor;
				break;
			}
			tmp -= q * divisor;
			divisor /= 10;
		}
		return num;
	}
};