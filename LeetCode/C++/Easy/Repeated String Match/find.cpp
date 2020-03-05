class Solution {
public:
	int repeatedStringMatch(string A, string B) {

		string t = A;

		for (int i = 1; i < B.length() / A.length() + 3; i++) {
			if (t.find(B) != string::npos) return i;
			t += A;
		}

		return -1;
	}
};