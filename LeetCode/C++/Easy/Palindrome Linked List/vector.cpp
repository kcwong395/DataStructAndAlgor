/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include <vector>

class Solution {
public:
	bool isPalindrome(ListNode* head) {

		if (head == nullptr || head->next == nullptr) return true;

		vector<int> v;

		for (ListNode* p = head; p != nullptr; p = p->next) {
			v.push_back(p->val);
		}
		for (int i = 0; i < v.size() / 2; i++) {
			if (v[i] != v[v.size() - 1 - i]) return false;
		}

		return true;

	}
};