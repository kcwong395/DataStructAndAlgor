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
	bool helperfun(TreeNode* left, TreeNode* right) {

		if (left == nullptr || right == nullptr) return left == right;
		if (left->val == right->val) return helperfun(left->left, right->right) && helperfun(left->right, right->left);
		return false;

	}

	bool isSymmetric(TreeNode* root) {

		if (root == nullptr) return true;

		return helperfun(root->left, root->right);

	}
};