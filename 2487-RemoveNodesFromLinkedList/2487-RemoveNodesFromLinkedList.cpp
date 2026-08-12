// Last updated: 8/12/2026, 2:21:34 PM
1class Solution {
2public:
3    ListNode* removeNodes(ListNode* head) {
4        
5        if (head == nullptr || head->next == nullptr) {
6            return head;
7        }
8
9        head->next = removeNodes(head->next);
10
11        if (head->next->val > head->val) {
12            return head->next;
13        }
14
15        return head;
16    }
17};