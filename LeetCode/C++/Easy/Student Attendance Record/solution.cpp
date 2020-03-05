class Solution {
public:
	bool checkRecord(string s) {

		bool absent = false;
		int late = 0;

		for (int i = 0; i < s.length(); i++) {
			if (absent && s[i] == 'A') return false;
			if (late >= 2 && s[i] == 'L') return false;
			if (s[i] == 'A') {
				late = 0;
				absent = true;
			}
			else if (s[i] == 'L') {
				late += 1;
			}
			else {
				late = 0;
			}
		}

		return true;

	}
};