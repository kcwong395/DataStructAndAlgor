const int fastio = [] {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	return 0;
}();

class Solution {
public:
	int numUniqueEmails(vector<string>& emails) {
		vector<string> v;
		for (int i = 0; i < emails.size(); i++) {

			// string pre processing
			string e = "";
			int k = 0;
			while (emails[i][k] != '@') {
				if (emails[i][k] == '+') {
					while (emails[i][k] != '@') k++;
				}
				else {
					if (emails[i][k] != '.') {
						e += emails[i][k];
					}
					k++;
				}
			}
			e += emails[i].substr(k, emails[i].length() - k);
			//

			// match string
			bool found = false;
			for (int j = 0; j < v.size(); j++) {
				if (e.compare(v[j]) == 0) {
					found = true;
				}
			}
			if (!found) {
				v.push_back(e);
			}
			//
		}
		return v.size();
	}
};