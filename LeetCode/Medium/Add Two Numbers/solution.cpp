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
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

		ListNode *ans = new ListNode(0);
		ListNode *li = ans;
		bool carry = false;

		while (l1 != nullptr && l2 != nullptr) {
			if (carry) {
				ans->val += 1;
				carry = false;
			}
			ans->val += l1->val + l2->val;
			if (ans->val >= 10) {
				ans->val -= 10;
				carry = true;
			}
			if (l1->next != nullptr && l2->next != nullptr) {
				ans->next = new ListNode(0);
				ans = ans->next;
			}
			l1 = l1->next;
			l2 = l2->next;
		}

		if (l1 != nullptr) {
			ans->next = l1;
		}
		else if (l2 != nullptr) {
			ans->next = l2;
		}

		while (carry) {
			if (ans->next == nullptr) {
				ans->next = new ListNode(1);
			}
			else
				ans->next->val += 1;
			ans = ans->next;
			carry = false;
			if (ans->val >= 10) {
				ans->val -= 10;
				carry = true;
			}
		}

		return li;

	}
};