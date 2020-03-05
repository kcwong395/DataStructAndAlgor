class Solution {
public:
	int uniqueMorseRepresentations(vector<string>& words) {
		string arr[26] = { ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.." };

		string result[100];

		int ans = 0;

		for (int i = 0; i < words.size(); i++) {

			string temp = "";

			for (int j = 0; j < words[i].length(); j++) {
				temp += arr[words[i][j] - 'a'];
			}

			bool found = false;

			for (int k = 0; k < ans; k++) {
				if (temp.compare(result[k]) == 0) {
					found = true;
				}
			}

			if (!found) {
				result[ans++] = temp;
			}

		}

		return ans;

	}
};