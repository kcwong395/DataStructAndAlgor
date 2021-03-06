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
	int maxDepth(TreeNode* root) {

		if (root == nullptr) return 0;

		int left = maxDepth(root->left), right = maxDepth(root->right);

		return max(left, right) + 1;

		/*
		or simply write
		return max(maxDepth(root->left), maxDepth(root->right)) + 1;
		*/

	}
};