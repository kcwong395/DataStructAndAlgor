/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

static int io = []() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	return 0;
}();

class Solution {
public:
	TreeNode* searchBST(TreeNode* root, int val) {

		if (root == nullptr) return nullptr;

		if (root->val == val) return root;

		return (root->val > val ? searchBST(root->left, val) : searchBST(root->right, val));
	}
};