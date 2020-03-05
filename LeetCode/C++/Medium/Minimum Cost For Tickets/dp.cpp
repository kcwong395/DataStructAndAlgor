class Solution {
public:
	int mincostTickets(vector<int>& days, vector<int>& costs) {

		int d[366] = { 0 };
		d[1] = costs[0];
		for (int i = 1; i < costs.size(); i++) {
			d[1] = min(d[1], costs[i]);
		}

		int duration[] = { 1, 7, 30 };

		for (int i = 2; i <= days.size(); i++) {

			int mini = d[i - 1] + costs[0];

			for (int j = 1; j < costs.size(); j++) {
				int k = 1;
				for (; days[i - 1] - days[k - 1] >= duration[j] && k < i; k++);
				mini = min(mini, d[k - 1] + costs[j]);
			}

			d[i] = mini;
		}

		return d[days.size()];
	}
};