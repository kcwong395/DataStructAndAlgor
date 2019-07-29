/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

static auto _ = []()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	return nullptr;
}();

class Solution {
public:

	int tra(TreeNode* root, int L, int R) {

		if (root == nullptr) return 0;

		int sum = 0;

		if (root->val >= L && root->val <= R) {
			sum = root->val;
		}

		return tra(root->left, L, R) + tra(root->right, L, R) + sum;

	}

	int rangeSumBST(TreeNode* root, int L, int R) {

		return tra(root, L, R);

	}
};