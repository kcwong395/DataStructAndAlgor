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

	TreeNode* bstFromPreorder(vector<int>& preorder) {

		if (preorder.size() == 0) return nullptr;

		TreeNode* root = new TreeNode(preorder[0]);

		for (int i = 1; i < preorder.size(); i++) {
			insertIntoBST(root, preorder[i]);
		}

		return root;

	}
};