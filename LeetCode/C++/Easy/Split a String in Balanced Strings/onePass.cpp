class Solution {
public:
	int balancedStringSplit(string s) {

		int r = 0, ans = 0;

		for (int i = 0; i < s.length(); i++) {
			s[i] == 'R' ? r++ : r--;
			if (r == 0) ans++;
		}

		return ans;
	}
};