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
	void tra(TreeNode* root, vector<int>& v) {

		if (root == nullptr) return;

		tra(root->left, v);
		v.push_back(root->val);
		tra(root->right, v);
	}

	TreeNode* increasingBST(TreeNode* root) {

		vector<int> v;

		tra(root, v);

		TreeNode* tmp = new TreeNode(v[0]);
		TreeNode* t = tmp;
		for (int i = 1; i < v.size(); i++) {
			tmp->right = new TreeNode(v[i]);
			tmp = tmp->right;
		}

		return t;
	}
};