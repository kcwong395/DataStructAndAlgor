class Solution {
public:
	bool isValid(string s) {

		int n = s.length();

		if (n == 0) return true;

		stack<char> st;

		st.push(s[0]);

		for (int i = 1; i < n; i++) {
			if (!st.empty()) {
				char t = st.top();
				if (s[i] == ')' && t == '('
					|| s[i] == '}' && t == '{'
					|| s[i] == ']' && t == '[')
					st.pop();
				else {
					st.push(s[i]);
				}
			}
			else {
				st.push(s[i]);
			}
		}

		return st.empty();

	}
};