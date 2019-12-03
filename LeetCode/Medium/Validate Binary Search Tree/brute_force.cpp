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
	bool traLeft(TreeNode* root, TreeNode* cur) {
		if (cur == NULL) return true;
		if (cur->val >= root->val) return false;
		return traLeft(root, cur->left) && traLeft(root, cur->right);
	}

	bool traRight(TreeNode* root, TreeNode* cur) {
		if (cur == NULL) return true;
		if (cur->val <= root->val) return false;
		return traRight(root, cur->left) && traRight(root, cur->right);
	}

	bool isValidBST(TreeNode* root) {

		if (root == NULL) return true;

		if (traLeft(root, root->left) && traRight(root, root->right)) {
			return isValidBST(root->left) && isValidBST(root->right);
		}
		else {
			return false;
		}

	}
};