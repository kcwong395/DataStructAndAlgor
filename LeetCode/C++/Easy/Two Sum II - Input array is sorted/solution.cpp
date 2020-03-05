class Solution {
public:
	vector<int> twoSum(vector<int>& numbers, int target) {

		vector<int> ans;
		int n = numbers.size();

		for (int i = 0; i < n; i++) {

			int high = n - 1;
			int low = 0;

			while (low <= high) {

				int mid = (high + low) / 2;

				if (numbers[mid] + numbers[i] < target)
					low = mid + 1;
				else if (numbers[mid] + numbers[i] > target)
					high = mid - 1;
				else {
					if (i == mid && (mid == n - 1 || numbers[i] != numbers[i + 1]))
						i--;
					else if (i == mid && (mid == 0 || numbers[i] == numbers[i + 1]))
						mid++;
					ans.push_back(i + 1);
					ans.push_back(mid + 1);
					return ans;
				}
			}
		}

		return ans;

	}
};