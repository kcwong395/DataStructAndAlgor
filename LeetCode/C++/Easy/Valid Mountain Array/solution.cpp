class Solution {
public:
	bool validMountainArray(vector<int>& A) {

		if (A.size() < 3 || A[1] <= A[0]) return false;

		bool found = false;

		for (int i = 2; i < A.size(); i++) {
			if (found && A[i] > A[i - 1]) return false;
			if (A[i] < A[i - 1]) found = true;
			if (A[i] == A[i - 1]) return false;
		}

		return found;

	}
};