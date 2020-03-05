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
	int sumOfLeftLeaves(TreeNode* root) {

		if (root == nullptr || (root->left == nullptr && root->right == nullptr)) return 0;
		if (root->left == nullptr) return sumOfLeftLeaves(root->right);
		if (root->left->left == nullptr && root->left->right == nullptr) return root->left->val + sumOfLeftLeaves(root->right);

		return sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);

	}
};