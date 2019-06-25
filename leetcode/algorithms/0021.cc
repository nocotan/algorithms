#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) { }
};


class Solution {
    public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        vector<int> ans_vec;
        while (l1 != NULL && l2 != NULL) {
            if (l1 == NULL) {
                ans_vec.push_back(l2->val);
                l2 = l2->next;
            } else if (l2 == NULL) {
                ans_vec.push_back(l1->val);
                l1 = l1->next;
            } else {
                if (l1->val < l2->val) {
                    ans_vec.push_back(l1->val);
                    l1 = l1->next;
                } else {
                    ans_vec.push_back(l2->val);
                    l2 = l2->next;
                }
            }
        }

        ListNode* ans = new ListNode(0);
        ListNode* ptr = ans;
        for (int item : ans_vec) {
            ptr->next = new ListNode(item);
            ptr = ptr->next;
        }

        ptr = ans->next;
        return ptr;
    }
};