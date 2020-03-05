class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {

		int common = 0;
		string ans = "";

		if (!strs.empty()) {
			while (common < strs[0].length()) {
				for (int i = 1; i < strs.size(); i++)
					if (strs[0][common] != strs[i][common])
						return ans;
				ans += strs[0][common];
				common++;
			}
		}

		return ans;

	}
};