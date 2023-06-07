#include <iostream>

using namespace std;

// Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        int carry = 0;
        ListNode* cur = dummy;
        while (l1 || l2 || carry) {
            int s = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
            carry = s / 10;
            cur->next = new ListNode(s % 10);
            cur = cur->next;
            l1 = l1 ? l1->next : nullptr;
            l2 = l2 ? l2->next : nullptr;
        }
        return dummy->next;
    }
};

int main() {
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);
    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    ListNode* newList = Solution().addTwoNumbers(l1,l2);
    while (newList) {
        cout << "newList head : " << newList->val << endl;
        newList = newList->next;
    }
    return 0;
}