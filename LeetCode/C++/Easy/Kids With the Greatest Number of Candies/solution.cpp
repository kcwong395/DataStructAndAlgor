class Solution {
public:
	vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
		vector<bool> ans;
		if (candies.size() <= 0) return ans;
		int maxi = candies[0];
		for (int i = 1; i < candies.size(); i++) {
			maxi = max(candies[i], maxi);
		}
		for (int i = 0; i < candies.size(); i++) {
			ans.push_back(candies[i] + extraCandies >= maxi);
		}
		return ans;
	}
};