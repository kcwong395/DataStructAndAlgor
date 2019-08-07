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
	ListNode* reverse(ListNode* pre, ListNode* cur) {

		if (cur == nullptr) return pre;

		ListNode* temp = cur->next;
		cur->next = pre;
		return reverse(cur, temp);

	}

	ListNode* reverseList(ListNode* head) {

		return reverse(nullptr, head);

	}
};