// Last updated: 8/7/2026, 2:05:19 PM
1class Solution {
2public:
3    ListNode* reverseBetween(ListNode* head, int left, int right) {
4
5        if (left == right)
6            return head;
7
8        ListNode* dummy = new ListNode(0);
9        dummy->next = head;
10
11        ListNode* curr = dummy;
12
13        for (int i = 1; i < left; i++) {
14            curr = curr->next;
15        }
16
17        ListNode* start = curr->next;
18
19        for (int i = 0; i < right - left; i++) {
20
21            ListNode* next = start->next;
22
23            start->next = next->next;
24
25            next->next = curr->next;
26
27            curr->next = next;
28        }
29
30        return dummy->next;
31    }
32};