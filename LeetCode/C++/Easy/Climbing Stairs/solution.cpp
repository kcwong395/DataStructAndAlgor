class Solution {
public:
	int climbStairs(int n) {
		// s1 -> 1
		// s2 -> 1 + 1
		// s3 -> 1 + 1 + 1, 1 + 2 -> s2 + 1, s1 + 2
		int a = 1, b = 1;
		for (int i = 1; i < n; i++) {
			int tmp = a + b;
			a = b;
			b = tmp;
		}
		return b;
	}
};