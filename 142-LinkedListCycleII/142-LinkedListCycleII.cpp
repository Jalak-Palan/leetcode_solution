// Last updated: 9/8/2026, 10:26:00 AM
1
2class Solution {
3public:
4    bool hasCycle(ListNode *head) {
5ListNode* slow = head;
6    ListNode* fast = head;
7
8    while (fast != NULL && fast->next != NULL) {
9        slow = slow->next;
10        fast = fast->next->next;
11
12        if (slow == fast)
13            return true;
14    }
15
16    return false;
17}
18};