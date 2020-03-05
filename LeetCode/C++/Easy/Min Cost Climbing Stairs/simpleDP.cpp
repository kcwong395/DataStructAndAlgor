// dp store the cost to leave the i-1 th stair
class Solution {
public:
	int minCostClimbingStairs(vector<int>& cost) {

		if (cost.size() == 1) return cost[0];

		int d[1000];
		// precondition: cost is always positive
		d[0] = cost[0], d[1] = cost[1];

		for (int i = 2; i < cost.size(); i++) {
			d[i] = min(d[i - 2], d[i - 1]) + cost[i];
		}

		return min(d[cost.size() - 1], d[cost.size() - 2]);
	}
};

// dp store the cost to reach the i-1 th stair
class Solution2 {
public:
	int minCostClimbingStairs(vector<int>& cost) {

		int d[1001];

		// cost to reach first and second is 0
		d[0] = 0, d[1] = 0;

		for (int i = 2; i <= cost.size(); i++) { 
			d[i] = min(d[i - 2] + cost[i - 2], d[i - 1] + cost[i - 1]);
		}

		return d[cost.size()];
	}
};