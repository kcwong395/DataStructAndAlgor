static const auto fast = []() {ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); return nullptr; }();

class Solution {
public:
	int findContentChildren(vector<int>& g, vector<int>& s) {

		if (g.size() == 0 || s.size() == 0) return 0;

		sort(g.begin(), g.end());
		sort(s.begin(), s.end());

		int cnt = 0, i = 0;
		while (cnt < g.size() && i < s.size()) {
			if (g[cnt] <= s[i]) {
				cnt++;
			}
			i++;
		}

		return cnt;

	}
};