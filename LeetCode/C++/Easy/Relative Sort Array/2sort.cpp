class Solution {
public:
	vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
		int idx = 0;
		for (int j = 0; j < arr2.size(); j++) {
			for (int i = idx; i < arr1.size(); i++) {
				if (arr1[i] == arr2[j]) {
					arr1[i] = arr1[idx];
					arr1[idx] = arr2[j];
					idx++;
				}
			}
		}

		for (int i = idx; i < arr1.size(); i++) {
			for (int j = idx + 1; j < arr1.size(); j++) {
				if (arr1[j] < arr1[j - 1]) {
					int tmp = arr1[j];
					arr1[j] = arr1[j - 1];
					arr1[j - 1] = tmp;
				}
			}
		}
		return arr1;
	}
};