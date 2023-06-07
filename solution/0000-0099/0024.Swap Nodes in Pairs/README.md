# [24. 两两交换链表中的节点](https://leetcode.cn/problems/swap-nodes-in-pairs)

[English Version](/solution/0000-0099/0024.Swap%20Nodes%20in%20Pairs/README_EN.md)

## 题目描述

<!-- 这里写题目描述 -->

<p>给你一个链表，两两交换其中相邻的节点，并返回交换后链表的头节点。你必须在不修改节点内部的值的情况下完成本题（即，只能进行节点交换）。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/10/03/swap_ex1.jpg" style="width: 422px; height: 222px;" />
<pre>
<strong>输入：</strong>head = [1,2,3,4]
<strong>输出：</strong>[2,1,4,3]
</pre>

<p><strong>示例 2：</strong></p>

<pre>
<strong>输入：</strong>head = []
<strong>输出：</strong>[]
</pre>

<p><strong>示例 3：</strong></p>

<pre>
<strong>输入：</strong>head = [1]
<strong>输出：</strong>[1]
</pre>

<p>&nbsp;</p>

<p><strong>提示：</strong></p>

<ul>
	<li>链表中节点的数目在范围 <code>[0, 100]</code> 内</li>
	<li><code>0 &lt;= Node.val &lt;= 100</code></li>
</ul>


## 解法

<!-- 这里可写通用的实现逻辑 -->

**方法一：迭代**

设置虚拟头节点 dummy，pre 指针初始指向 dummy，遍历链表，每次交换 pre 后面的两个节点即可。

时间复杂度为 $O(n)$，空间复杂度为 $O(1)$，其中 $n$ 是链表的长度。

**方法二：递归**

时间复杂度为 $O(n)$，空间复杂度为 $O(n)$，其中 $n$ 是链表的长度。

<!-- tabs:start -->

### **Python3**

<!-- 这里可写当前语言的特殊实现逻辑 -->

```python

```

### **Java**

<!-- 这里可写当前语言的特殊实现逻辑 -->

```java

```

### **C++**

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
```

```cpp
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;
        ListNode* newHead = head->next;
        head->next = swapPairs(newHead->next);
        newHead->next = head;
        return newHead;
    }
};
```

### **Go**

```go

```

### **...**

```

```

<!-- tabs:end -->