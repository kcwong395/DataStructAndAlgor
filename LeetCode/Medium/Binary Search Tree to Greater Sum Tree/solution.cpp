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
	void tra(TreeNode* root, int& last) {

		if (root == nullptr) return;

		// visit right subtree, root and left subtree
		tra(root->right, last);
		root->val += last;
		last = root->val;
		tra(root->left, last);

	}

	TreeNode* bstToGst(TreeNode* root) {

		int last = 0;

		tra(root, last);

		return root;

	}
};