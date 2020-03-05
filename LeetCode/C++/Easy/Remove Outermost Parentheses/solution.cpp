class Solution {
public:
	string removeOuterParentheses(string S) {

		int temp = 0;
		string ans = "";

		for (int i = 0; i < S.length(); i++) {
			if (S[i] == '(') {
				if (temp != 0) {
					ans += S[i];
				}
				temp++;
			}
			else {
				temp--;
				if (temp != 0) {
					ans += S[i];
				}
			}
		}

		return ans;

	}
};