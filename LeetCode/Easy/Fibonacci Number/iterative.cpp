class Solution {
public:
	int fib(int N) {

		if (N == 0) return 0;
		if (N == 1) return 1;

		int t1 = 0, t2 = 1;

		for (int i = 3; i <= N; i++) {
			int temp = t1;
			t1 = t2;
			t2 = t2 + temp;
		}

		return t1 + t2;

	}
};