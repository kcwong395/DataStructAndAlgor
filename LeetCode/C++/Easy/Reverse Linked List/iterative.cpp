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
	ListNode* reverseList(ListNode* head) {

		ListNode *pre = nullptr;

		while (head != nullptr)
		{
			ListNode *cur = new ListNode(head->val);
			cur->next = pre;
			pre = cur;
			head = head->next;
		}

		return pre;

	}
};