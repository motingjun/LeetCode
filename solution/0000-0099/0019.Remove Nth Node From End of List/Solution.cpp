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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* fast = dummy;
        ListNode* slow = dummy;
        while (n--) {
            fast = fast->next;
        }
        while (fast->next) {
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return dummy->next;
    }
};

int main() {
    ListNode head = ListNode(0);
    int n = 2;
    int i = 1;
    while (i < 6) {
        ListNode* tmp = new ListNode;
        tmp->val = i;
        tmp->next = nullptr;
        head.next = tmp;
        cout << tmp->val <<endl;
        i++;
    }
    ListNode* res = Solution().removeNthFromEnd(&head, n);
    while (res->next) {
        cout << res->val << endl;
    }
//    cout << Solution().removeNthFromEnd(&head, n)->val << endl;
    return 0;
}