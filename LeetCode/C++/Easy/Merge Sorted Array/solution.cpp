class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (nums2[i] <= nums1[j]) {
					nums1.insert(nums1.begin() + j, nums2[i]);
					m++;
					break;
				}
			}
			if (m == 0 || nums2[i] > nums1[m - 1]) {
				nums1.insert(nums1.begin() + m++, nums2[i]);
			}
		}
		while (m < nums1.size()) {
			nums1.pop_back();
		}
	}
};