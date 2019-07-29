class Solution {
public:
	int numJewelsInStones(string J, string S) {

		int sum = 0;

		for (int i = 0; i < J.length(); i++) {
			for (int j = 0; j < S.length(); j++) {
				if (S[j] == J[i]) {
					sum += 1;
				}
			}
		}

		return sum;

	}
};