class Solution {
public:
	int numberOfSteps(int num) {

		int cnt = 0;

		while (num > 0) {
			num % 2 == 0 ? num /= 2 : num--;
			cnt++;
		}

		return cnt;
	}
};