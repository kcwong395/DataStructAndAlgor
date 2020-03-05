class Solution {
public:
	int maxArea(vector<int>& height) {

		int s = 0;
		int e = height.size() - 1;
		int area = -1;

		while (s < e) {

			area = max(area, (e - s) * min(height[s], height[e]));

			if (height[s] < height[e])
				s++;
			else
				e--;
		}

		return area;

	}
};