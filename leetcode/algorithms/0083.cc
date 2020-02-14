#include <stddef.h>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) { }
};


class Solution {
    public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr) return NULL;
        ListNode* fast = head->next;
        ListNode* slow = head;
        while (slow != nullptr && fast != nullptr) {
            if (slow->val == fast->val) {
                ListNode* tmp = fast;
                fast = fast->next;
                slow->next = fast;
                delete tmp;
            } else {
                fast = fast->next;
                slow = slow->next;
            }
        }

        return head;
    }
};