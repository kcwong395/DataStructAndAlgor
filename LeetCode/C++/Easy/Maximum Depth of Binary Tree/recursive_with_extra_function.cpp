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
	int recur(TreeNode* root, int level) {

		if (root == nullptr) return level;

		return max(recur(root->left, level + 1), recur(root->right, level + 1));

	}

	int maxDepth(TreeNode* root) {

		return recur(root, 0);

	}
};