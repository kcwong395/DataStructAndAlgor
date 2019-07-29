class Solution {
public:
	int numJewelsInStones(string J, string S) {

		int sum = 0;
		int val[52] = { 0 };

		for (int i = 0; i < S.length(); i++) {
			S[i] >= 'a' && S[i] <= 'z' ? val[S[i] - 'a']++ : val[S[i] - 'A' + 26]++;
		}

		for (int i = 0; i < J.length(); i++) {
			J[i] >= 'a' && J[i] <= 'z' ? sum += val[J[i] - 'a'] : sum += val[J[i] - 'A' + 26];
		}

		return sum;

	}
};