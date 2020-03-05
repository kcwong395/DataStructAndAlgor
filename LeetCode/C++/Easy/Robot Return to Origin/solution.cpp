int __x__ = []() ->int {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	return 1010;
}();

class Solution {
public:
	bool judgeCircle(string moves) {

		int up = 0, left = 0;

		for (int i = 0; i < moves.length(); i++)
		{
			switch (moves[i])
			{
			case 'U':
				up++;
				break;
			case 'L':
				left++;
				break;
			case 'R':
				left--;
				break;
			default:
				up--;
			}
		}

		return up == 0 && left == 0;

	}
};