class Solution {
public:
	vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {

		for (int i = 0; i < A.size(); i++)
		{
			// int / double results in a double, ceil rounds up the double
			for (int j = 0; j < ceil(A[i].size() / 2.0); j++)
			{
				// swap left and right digit
				int temp = !A[i][j];
				A[i][j] = !A[i][A[i].size() - 1 - j];
				A[i][A[i].size() - 1 - j] = temp;
			}
		}

		return A;

	}
};