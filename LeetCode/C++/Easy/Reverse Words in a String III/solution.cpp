class Solution {
public:
	string reverseWords(string s) {

		ios_base::sync_with_stdio(false);

		int i = 0;
		while (i < s.length()) {

			int j = i + 1;
			while (j < s.length() && s[j] != ' ') j++;

			for (int k = 0; k < (j - i) / 2; k++) {
				char tmp = s[k + i];
				s[k + i] = s[j - k - 1];
				s[j - k - 1] = tmp;
			}

			i = j + 1;
		}

		return s;
	}
};