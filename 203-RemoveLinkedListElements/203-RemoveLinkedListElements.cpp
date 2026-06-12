// Last updated: 6/12/2026, 7:16:36 PM
1class Solution {
2public:
3    ListNode* removeElements(ListNode* head, int val) {
4
5        while (head != NULL && head->val == val) {
6            head = head->next;
7        }
8
9        ListNode* curr = head;
10
11        while (curr != NULL && curr->next != NULL) {
12
13            if (curr->next->val == val) {
14                curr->next = curr->next->next;
15            }
16            else {
17                curr = curr->next;
18            }
19        }
20
21        return head;
22    }
23};