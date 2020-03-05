class Solution {
public:
	bool isPalindrome(string s) {

		int i = 0, j = s.length() - 1;

		while (i < j) {
			if (!isalpha(s[i]) && !isdigit(s[i])) {
				i++;
				continue;
			}
			if (!isalpha(s[j]) && !isdigit(s[j])) {
				j--;
				continue;
			}
			if ((isalpha(s[j]) && !isalpha(s[i])) || (abs(s[i] - s[j]) != 0 && abs(s[i] - s[j]) != 32)) return false;
			i++;
			j--;
		}

		return true;

	}
};