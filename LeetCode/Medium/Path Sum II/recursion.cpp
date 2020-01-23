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
	void tra(TreeNode* root, int sum, vector<vector<int>>& ans, vector<int>& path) {

		if (root == nullptr) return;

		path.push_back(root->val);

		if (root->left == nullptr && root->right == nullptr && root->val == sum) {
			ans.push_back(path);
		}

		tra(root->left, sum - root->val, ans, path);
		tra(root->right, sum - root->val, ans, path);
		path.pop_back();

	}
	vector<vector<int>> pathSum(TreeNode* root, int sum) {

		vector<vector<int>> ans;

		vector<int> path;

		tra(root, sum, ans, path);

		return ans;
	}
};