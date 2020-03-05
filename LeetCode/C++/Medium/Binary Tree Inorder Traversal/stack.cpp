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
	vector<int> inorderTraversal(TreeNode* root) {
		stack<TreeNode*> st;
		vector<int> v;

		while (root != nullptr) {
			st.push(root);
			root = root->left;
		}

		while (!st.empty()) {
			root = st.top(); st.pop();
			v.push_back(root->val);
			root = root->right;
			while (root != nullptr) {
				st.push(root);
				root = root->left;

			}
		}
		return v;
	}
};