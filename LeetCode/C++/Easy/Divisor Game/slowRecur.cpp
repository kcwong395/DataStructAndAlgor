class Solution {
public:
	bool divisorGame(int N) {

		if(N == 1 || N == 2) return N != 1;

		for(int i = N / 2; i > 0; i--)
			if(N % i == 0)
				if(!divisorGame(N - i))
					return true;

		return false;

	}
};