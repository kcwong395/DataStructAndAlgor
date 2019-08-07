/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
	TreeNode* create(vector<int>& nums, int s, int e) {

		if (s > e) return nullptr;

		int mid = (s + e) / 2;

		TreeNode* node = new TreeNode(nums[mid]);
		node->left = create(nums, s, mid - 1);
		node->right = create(nums, mid + 1, e);

		return node;

	}

	TreeNode* sortedArrayToBST(vector<int>& nums) {

		return create(nums, 0, nums.size() - 1);

	}
};