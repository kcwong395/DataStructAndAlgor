class Solution {
public:
	vector<int> partitionLabels(string S) {

		vector<int> v;

		int i = 0, end = 0;

		while (i < S.length()) {

			for (int j = S.length(); j >= i; j--) {
				if (S[j] == S[i]) {
					end = j;
					break;
				}
			}

			for (int k = i + 1; k <= end; k++) {
				for (int h = S.length() - 1; h >= end + 1; h--) {
					if (S[k] == S[h]) {
						end = h;
						break;
					}
				}
			}

			v.push_back(end + 1 - i);
			i = end + 1;

		}

		return v;

	}
};