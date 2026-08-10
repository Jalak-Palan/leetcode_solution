// Last updated: 8/10/2026, 1:27:42 PM
1class Solution {
2public:
3    ListNode* partition(ListNode* head, int x) {
4
5        ListNode smallDummy(0);
6        ListNode largeDummy(0);
7
8        ListNode* small = &smallDummy;
9        ListNode* large = &largeDummy;
10
11        while (head != NULL) {
12
13            if (head->val < x) {
14                small->next = head;
15                small = small->next;
16            }
17            else {
18                large->next = head;
19                large = large->next;
20            }
21
22            head = head->next;
23        }
24
25        large->next = NULL;
26
27        small->next = largeDummy.next;
28
29        return smallDummy.next;
30    }
31};