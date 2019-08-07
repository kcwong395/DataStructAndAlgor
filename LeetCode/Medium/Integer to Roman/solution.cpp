class Solution {
public:
	string intToRoman(int num) {

		string ans = "";
		int n = num;
		int digit = -1;
		int div = 10;
		int rank = 1;
		bool larger5 = false;

		while (n > 0) {
			digit = n % div;
			n -= digit;
			digit /= (div / 10);
			switch (rank) {
			case 1:
				if (digit == 9) {
					ans = "IX" + ans;
					break;
				}
				else if (digit >= 5) {
					digit -= 5;
					larger5 = true;
				}
				else if (digit == 4) {
					ans = "IV" + ans;
					break;
				}
				while (digit >= 1) {
					ans = 'I' + ans;
					digit--;
				}
				if (larger5) ans = "V" + ans;
				larger5 = false;
				break;
			case 2:
				if (digit == 9) {
					ans = "XC" + ans;
					break;
				}
				else if (digit >= 5) {
					digit -= 5;
					larger5 = true;
				}
				else if (digit == 4) {
					ans = "XL" + ans;
					break;
				}
				while (digit >= 1) {
					ans = 'X' + ans;
					digit--;
				}
				if (larger5) ans = "L" + ans;
				larger5 = false;
				break;
			case 3:
				if (digit == 9) {
					ans = "CM" + ans;
					break;
				}
				else if (digit >= 5) {
					digit -= 5;
					larger5 = true;
				}
				else if (digit == 4) {
					ans = "CD" + ans;
					break;
				}
				while (digit >= 1) {
					ans = 'C' + ans;
					digit--;
				}
				if (larger5) ans = "D" + ans;
				larger5 = false;
				break;
			case 4:
				while (digit >= 1) {
					ans = 'M' + ans;
					digit--;
				}
				break;
			}
			div *= 10;
			rank++;
		}

		return ans;

	}
};