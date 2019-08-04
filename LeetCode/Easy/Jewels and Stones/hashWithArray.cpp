class Solution {
public:
	int numJewelsInStones(string J, string S) {

		int sum = 0;
		int val[52] = { 0 };

		for (int i = 0; i < S.length(); i++) 
		{
			// val[0] donates 'a' and so on
			// val contains how many time each letter shows up
			S[i] >= 'a' && S[i] <= 'z' ? val[S[i] - 'a']++ : val[S[i] - 'A' + 26]++;
			
			/* a reader friendly version
			if(S[i] >= 'a' && S[i] <= 'z'){
                val[S[i] - 'a']++;
            }
            else {
                val[S[i] - 'A' + 26]++;
            }
			*/

		}

		// add up all the count if the letter is both jewel and stone
		for (int i = 0; i < J.length(); i++) 
		{
			J[i] >= 'a' && J[i] <= 'z' ? sum += val[J[i] - 'a'] : sum += val[J[i] - 'A' + 26];
		}

		return sum;

	}
};