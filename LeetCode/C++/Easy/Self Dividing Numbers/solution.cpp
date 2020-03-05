class Solution {
public:
	vector<int> selfDividingNumbers(int left, int right) {

		vector<int> ans;

		for (int i = left; i <= right; i++) {

			bool isSelfD = true;

			for (int temp = i; temp > 0; temp /= 10)
				// temp % 10 obtain one digit
				if (temp % 10 == 0 || i % (temp % 10) != 0) isSelfD = false;

			if (isSelfD) ans.push_back(i);

		}

		return ans;

	}
};