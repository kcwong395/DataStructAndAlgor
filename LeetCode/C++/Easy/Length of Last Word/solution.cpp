class Solution {
public:
	int lengthOfLastWord(string s) {

		int temp = 0;
		bool last = false;

		for (int i = s.length() - 1; i >= 0; i--) {
			if (s[i] == ' ') {
				if (last) break;
			}
			else {
				last = true;
				temp++;
			}
		}

		return temp;

	}
};