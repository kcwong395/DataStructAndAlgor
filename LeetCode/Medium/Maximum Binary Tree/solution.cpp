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
	TreeNode* nodeConstruct(vector<int>& nums, int s, int e) {

		if (s > e) return nullptr;

		int index = s;
		for (int i = s + 1; i < e + 1; i++) {
			if (nums[i] > nums[index]) {
				index = i;
			}
		}

		TreeNode *root = new TreeNode(nums[index]);
		root->left = nodeConstruct(nums, s, index - 1);
		root->right = nodeConstruct(nums, index + 1, e);

		return root;

	}

	TreeNode* constructMaximumBinaryTree(vector<int>& nums) {

		return nodeConstruct(nums, 0, nums.size() - 1);

	}
};