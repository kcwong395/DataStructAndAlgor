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

		ListNode* f = head;
		ListNode* s = head;

		while (f != nullptr && f->next != nullptr) {
			f = f->next->next;
			s = s->next;
		}

		return s;

	}
};