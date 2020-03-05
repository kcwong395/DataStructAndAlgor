class Solution {
public:
	vector<int> replaceElements(vector<int>& arr) {

		int n = arr.size();

		if (n == 0) return arr;

		int maxi = arr[n - 1];
		arr[n - 1] = -1;

		for (int i = n - 2; i >= 0; i--) {
			int tmp = arr[i];
			arr[i] = maxi;
			maxi = max(maxi, tmp);
		}

		return arr;
	}
};