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
	ListNode* middleNode(ListNode* head) {

		vector<ListNode*> v;

		while (head != nullptr) {
			v.push_back(head);
			head = head->next;
		}

		return v[v.size() / 2];
	}
};