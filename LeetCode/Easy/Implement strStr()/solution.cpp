class Solution {
public:
	int strStr(string haystack, string needle) {

		int m = haystack.length(), n = needle.length();

		if (n == 0) return 0;

		for (int i = 0; i <= m - n; i++) {
			int j = i;
			for (; haystack[j] == needle[j - i] && j < m; j++);
			if ((j - i) == n) return i;
		}

		return -1;

	}
};