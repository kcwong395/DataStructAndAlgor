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

		while (root != nullptr) {
			if (root->val == val) {
				return root;
			}
			root = root->val > val ? root->left : root->right;
		}

		return nullptr;
	}
};