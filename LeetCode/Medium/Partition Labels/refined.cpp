class Solution {
public:
	vector<int> partitionLabels(string S) {

		vector<int> v;

		int arr[26] = { 0 };

		// access the index that a char last appear
		for (int i = S.length() - 1; i >= 0; i--) {
			if (arr[S[i] - 'a'] == 0) {
				arr[S[i] - 'a'] = i;
			}
		}

		int end;

		for (int i = 0; i < S.length(); i = end + 1) {

			end = arr[S[i] - 'a'];

			for (int k = i + 1; k <= end; k++) {
				if (arr[S[k] - 'a'] > end) {
					end = arr[S[k] - 'a'];
				}
			}

			v.push_back(end + 1 - i);

		}

		return v;

	}
};