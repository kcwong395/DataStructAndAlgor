class Solution {
public:
	vector<int> plusOne(vector<int>& digits) {

		digits[digits.size() - 1] += 1;

		for (int i = digits.size() - 1; digits[i] > 9; i--) {
			digits[i] = 0;
			if (i == 0) {
				digits.insert(digits.begin(), 1);
				i++;
			}
			else {
				digits[i - 1] += 1;
			}
		}

		return digits;

	}
};