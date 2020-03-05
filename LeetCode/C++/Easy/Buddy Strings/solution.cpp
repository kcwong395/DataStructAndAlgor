class Solution {
public:
	bool buddyStrings(string A, string B) {

		// different length or anyone is an empty string must be false
		// to be a pair of buddy strings, they must fulfil
		// 1. A is same as B and there exists at least one char appears more one times OR
		// 2. There are only two bits different and after the swap, they will be the same

		if (A.length() != B.length() || A.length() == 0) return false;

		int diff[2] = { -1 };

		// first condition
		if (A.compare(B) == 0)
		{

			int appearTime[26] = { 0 };

			for (int i = 0, sum = 0; i < A.length(); i++)
				if (++appearTime[A[i] - 'a'] > 1)
					return true;
		}
		else
		{
			for (int i = 0, sum = 0; i < A.length(); i++)
			{
				if (A[i] != B[i])
				{
					if (sum > 1) return false;
					diff[sum++] = i;
				}
			}
		}

		// second condition
		if (diff[1] != -1 && A[diff[0]] == B[diff[1]] && A[diff[1]] == B[diff[0]]) return true;

		return false;
	}
};