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

	TreeNode* tmp = nullptr;
	TreeNode* t;

	void tra(TreeNode* root) {

		if (root == nullptr) return;

		tra(root->left);
		if (tmp == nullptr) {
			tmp = new TreeNode(root->val);
			t = tmp;
		}
		else {
			tmp->right = new TreeNode(root->val);
			tmp = tmp->right;
		}
		tra(root->right);
	}

	TreeNode* increasingBST(TreeNode* root) {

		tra(root);

		return t;
	}
};