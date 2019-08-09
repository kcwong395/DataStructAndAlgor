static auto speedup = []() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	return nullptr;
}();

class Solution {
public:
	int numRescueBoats(vector<int>& people, int limit) {

		int count = 0, n = people.size();

		sort(people.begin(), people.end(), greater<int>());

		for (int i = 0; i < n; i++, count++) {
			if (people[n - 1] <= limit - people[i]) n--;
		}

		return count;

	}
};