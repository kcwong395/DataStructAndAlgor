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
	bool tail(ListNode* head, int &n) {

		if (head == nullptr) return false;

		bool istail = tail(head->next, n);

		if (istail) head->next = nullptr;

		if (--n == 0) {
			if (head->next == nullptr) return true;
			head->val = head->next->val;
			head->next = head->next->next;
		}

		return false;

	}

	ListNode* removeNthFromEnd(ListNode* head, int n) {

		if (n == 1 && head->next == nullptr) return nullptr;

		tail(head, n);

		return head;

	}
};