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
	TreeNode* bstFromPreorder(vector<int>& preorder) {

		TreeNode* root = new TreeNode(preorder[0]), *temp = root;
		stack<TreeNode*> nodeVec;
		nodeVec.push(root);

		for (int i = 1; i < preorder.size(); i++) {

			TreeNode* newNode = new TreeNode(preorder[i]);

			if (nodeVec.top()->val < preorder[i]) {
				while (!nodeVec.empty() && nodeVec.top()->val < preorder[i]) {
					temp = nodeVec.top(); nodeVec.pop();
				}
				temp->right = newNode;
			}
			else {
				nodeVec.top()->left = newNode;
			}

			nodeVec.push(newNode);

		}

		return root;

	}
};