class Solution {
public:
	int romanToInt(string s) {

		int n = s.length();
		int total = 0;

		for (int i = 0; i < n; i++) {
			switch (s[i]) {
			case 'I':
				if ((s[i + 1] == 'V' || s[i + 1] == 'X') && i != n - 1) {
					total -= 1;
				}
				else
					total += 1;
				break;
			case 'X':
				if ((s[i + 1] == 'L' || s[i + 1] == 'C') && i != n - 1) {
					total -= 10;
				}
				else
					total += 10;
				break;
			case 'C':
				if ((s[i + 1] == 'D' || s[i + 1] == 'M') && i != n - 1) {
					total -= 100;
				}
				else
					total += 100;
				break;
			case 'V':
				total += 5;
				break;
			case 'L':
				total += 50;
				break;
			case 'D':
				total += 500;
				break;
			case 'M':
				total += 1000;
				break;
			}
		}

		return total;

	}
};