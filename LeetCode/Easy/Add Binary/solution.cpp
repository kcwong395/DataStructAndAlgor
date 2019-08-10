class Solution {
public:
	string addBinary(string a, string b) {

		bool carry = false;

		if (a.length() < b.length()) {
			string temp = a;
			a = b;
			b = temp;
		}

		int min = b.length() - 1;
		int max = a.length() - 1;

		for (int i = 0; i <= max; i++) {
			if (carry) {
				a[max - i]++;
				carry = false;
			}
			if (i <= min) {
				a[max - i] += b[min - i] - '0';
			}
			if (a[max - i] >= '2') {
				carry = true;
				a[max - i] -= 2;
			}
		}

		if (carry) {
			a = '1' + a;
		}

		return a;

	}
};