static auto _ = []()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	return nullptr;
}();

class Solution {
public:
	int repeatedNTimes(vector<int>& A) {

		set<int> s;

		for (int i = 0; i < A.size(); i++) {
			if (s.count(A[i]) > 0) return A[i];
			s.insert(A[i]);
		}

		return 0;

	}
};