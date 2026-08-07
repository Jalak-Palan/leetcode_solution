// Last updated: 8/7/2026, 2:25:46 PM
1class Solution {
2public:
3    ListNode* deleteDuplicates(ListNode* head) {
4
5        ListNode* dummy = new ListNode(0);
6        dummy->next = head;
7
8        ListNode* prev = dummy;
9        ListNode* curr = head;
10
11        while (curr != NULL) {
12
13            if (curr->next != NULL &&
14                curr->val == curr->next->val) {
15
16                int value = curr->val;
17
18                while (curr != NULL && curr->val == value) {
19                    curr = curr->next;
20                }
21
22                prev->next = curr;
23            }
24            else {
25                prev = curr;
26                curr = curr->next;
27            }
28        }
29
30        return dummy->next;
31    }
32};