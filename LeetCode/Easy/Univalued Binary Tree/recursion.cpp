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
	bool tra(TreeNode* root, int val) {
		if (root == nullptr) return true;

		if (root->val != val) return false;

		return tra(root->left, val) && tra(root->right, val);
	}

	bool isUnivalTree(TreeNode* root) {
		return tra(root, root->val);
	}
};