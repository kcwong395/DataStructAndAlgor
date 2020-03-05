class Solution {
public:
	static bool compareInterval(vector<int> i1, vector<int> i2)
	{
		return (i1[0] < i2[0]);
	}

	vector<vector<int>> merge(vector<vector<int>>& intervals) {

		vector<vector<int>> v;

		if (intervals.empty()) return v;

		sort(intervals.begin(), intervals.end(), compareInterval);

		vector<int> tmp{ intervals[0][0], intervals[0][1] };

		for (int i = 1; i < intervals.size(); i++) {
			if (intervals[i][0] <= tmp[1]) {
				tmp[1] = max(tmp[1], intervals[i][1]);
			}
			else {
				v.push_back(tmp);
				tmp[0] = intervals[i][0];
				tmp[1] = intervals[i][1];
			}
		}

		v.push_back(tmp);
		return v;
	}
};