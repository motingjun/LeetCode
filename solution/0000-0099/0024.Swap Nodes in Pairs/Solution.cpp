struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// 方法一：迭代
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy = new ListNode(0, head);
        ListNode *pre = dummy, *cur = head;
        while (cur != nullptr && cur->next != nullptr) {
            ListNode* t = cur->next;
            cur->next = t->next;
            t->next = cur;
            pre->next = t;
            pre = cur;
            cur = cur->next;
        }
        return dummy->next;
    }
};

// 方法二：递归
class Solution1 {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;
        ListNode* newHead = head->next;
        head->next = swapPairs(newHead->next);
        newHead->next = head;
        return newHead;
    }
};

int main() {
    return 0;
}