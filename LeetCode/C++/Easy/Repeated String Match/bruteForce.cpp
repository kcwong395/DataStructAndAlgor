class Solution {
public:
	int repeatedStringMatch(string A, string B) {
		for (int i = 0; i < A.length(); i++) {
			if (A[i] == B[0]) {
				int t = i, s = 0;
				while (s < B.length() && A[t % A.length()] == B[s]) {
					t++;
					s++;
				}
				if (s == B.length()) return ceil(t / (double)A.length());
			}
		}

		return -1;
	}
};