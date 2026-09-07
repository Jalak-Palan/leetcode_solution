// Last updated: 9/7/2026, 1:45:10 PM
1class Solution {
2public:
3    ListNode* middleNode(ListNode* head) {
4        int size = 0;
5        ListNode* i = head;
6        while (i != NULL) {
7            size++;
8            i = i->next;
9        }
10        int mid = size / 2;
11
12        int count = 0;
13        i = head;
14        while (count < mid) {
15            i = i->next;
16            count++;
17        }
18        return i;
19    }
20};