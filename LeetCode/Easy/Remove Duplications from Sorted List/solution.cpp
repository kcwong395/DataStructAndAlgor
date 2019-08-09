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
	ListNode* deleteDuplicates(ListNode* head) {

		if (head != nullptr && head->next != nullptr) {

			ListNode *cur = head->next;
			ListNode *pre = head;

			while (cur != nullptr) {
				if (cur->val == pre->val) {
					if (cur->next != nullptr)
						pre->next = cur->next;
					else
						pre->next = nullptr;
					delete cur;
					cur = pre->next;
				}
				else {
					pre = cur;
					cur = cur->next;
				}
			}
		}

		return head;

	}
};