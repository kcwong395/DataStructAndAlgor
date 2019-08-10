class Solution {
public:
	int arrangeCoins(int n) {

		int i = 1;
		
		for (; n >= i; i++) n -= i;
		
		return i - 1;
	
	}
};