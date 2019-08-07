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
	bool tra(TreeNode* temp, TreeNode* root, int k) {

		if (root == nullptr) return false;

		if (root->val == k && root != temp) return true;

		if (root->val > k) return tra(temp, root->left, k);

		return tra(temp, root->right, k);

	}

	bool findTarget(TreeNode* root, int k) {

		if (root == nullptr) return false;

		stack<TreeNode*> s;

		s.push(root);

		while (!s.empty()) {
			TreeNode* temp = s.top(); s.pop();
			int rest = k - temp->val;
			if (tra(temp, root, rest) || tra(temp, root, rest)) return true;
			if (temp->left != nullptr) s.push(temp->left);
			if (temp->right != nullptr) s.push(temp->right);
		}

		return false;

	}
};