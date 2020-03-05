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

		ListNode* tmp = head;

		int cnt = 0;
		while (tmp != nullptr) {
			tmp = tmp->next;
			cnt++;
		}

		tmp = head;
		for (int j = 0; j < cnt / 2; j++) {
			tmp = tmp->next;
		}

		return tmp;
	}
};