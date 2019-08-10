/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

static auto ___ = []() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	return 0;
}();

class Solution {
public:
	ListNode* removeElements(ListNode* head, int val) {

		for (ListNode* cur = head, *pre = nullptr; cur != nullptr; cur = cur->next) {
			if (cur->val == val) 
				pre == nullptr ? head = cur->next : pre->next = cur->next;
			else pre = cur;
		}

		return head;

	}
};