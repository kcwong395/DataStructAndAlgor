/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
	int find(ListNode* sp) {
		int ans = 0;
		ListNode* tmp = sp;
		while (tmp != nullptr) {
			if (tmp->val > sp->val) return tmp->val;
			tmp = tmp->next;
		}
		return ans;
	}

	vector<int> nextLargerNodes(ListNode* head) {

		vector<int> ans;

		while (head != nullptr) {
			ans.push_back(find(head));
			head = head->next;
		}

		return ans;
	}
};