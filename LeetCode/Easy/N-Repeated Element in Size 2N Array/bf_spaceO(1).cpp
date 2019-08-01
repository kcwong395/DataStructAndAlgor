static auto _ = []()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	return nullptr;
}();

class Solution {
public:
	int repeatedNTimes(vector<int>& A) {

		for (int i = 0; i < A.size() - 1; i++) 
			for (int j = i + 1; j < A.size(); j++) 
				if (A[i] == A[j]) return A[i];

		return 0;

	}
};