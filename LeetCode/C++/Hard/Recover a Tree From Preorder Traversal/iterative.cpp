/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

static const auto _____ = []()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	return 0;
}();

class Solution {
public:
	TreeNode* recoverFromPreorder(string S) {

		TreeNode *root = nullptr, *cur = nullptr;
		int cntD = 0, pCntD = 0;
		stack<TreeNode*> s;

		int i = 0;
		while (i < S.length())
		{
			if (S[i] == '-')
			{
				while (S[i] == '-')
				{
					cntD++;
					i++;
				}
			}
			else
			{
				int j = i;
				while (isdigit(S[j])) j++;
				string numS = S.substr(i, j - i);
				int num = std::stoi(numS);

				if (root == nullptr)
				{
					root = new TreeNode(num);
					s.push(root);
					cur = root;
				}
				else if (pCntD < cntD)
				{
					cur->left = new TreeNode(num);
					s.push(cur);
					cur = cur->left;
					pCntD = cntD;
					cntD = 0;
				}
				else
				{
					int diff = pCntD - cntD;
					while (diff--)
					{
						s.pop();
					}
					cur = s.top();
					cur->right = new TreeNode(num);
					cur = cur->right;
					pCntD = cntD;
					cntD = 0;
				}
				i = j;
			}
		}

		return root;
	}
};