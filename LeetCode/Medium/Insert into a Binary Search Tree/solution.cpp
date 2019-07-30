/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
static auto x = []() {std::ios::sync_with_stdio(false); cin.tie(nullptr); return nullptr; }();

class Solution {
public:
	TreeNode* insertIntoBST(TreeNode* root, int val) {

		if (root == nullptr) return new TreeNode(val);

		TreeNode* insertPt = root;
		TreeNode* preNode = nullptr;

		while (insertPt != nullptr) {
			preNode = insertPt;
			if (insertPt->val < val) {
				insertPt = insertPt->right;
			}
			else {
				insertPt = insertPt->left;
			}
		}

		if (preNode->val < val) {
			preNode->right = new TreeNode(val);
		}
		else {
			preNode->left = new TreeNode(val);
		}

		return root;

	}
};