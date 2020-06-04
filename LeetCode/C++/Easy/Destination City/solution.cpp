class Solution {
public:
	string destCity(vector<vector<string>>& paths) {
		bool done = false;
		string start = paths[0][0], end = paths[0][1];
		while (!done) {
			int i = 1;
			while (i < paths.size()) {
				if (end == paths[i][0]) {
					end = paths[i][1];
					break;
				}
				i++;
			}
			if (i >= paths.size()) {
				done = true;
			}
		}
		return end;
	}
};