// Last updated: 8/19/2026, 1:51:42 PM
1class Solution {
2public:
3    ListNode* removeZeroSumSublists(ListNode* head) {
4        ListNode dummy(0, head), *cur = &dummy;
5        unordered_map<int, ListNode*> m;
6        for (int sum = 0; cur; cur = cur->next) {
7            sum += cur->val;
8            if (m.count(sum)) {
9                ListNode* prev = m[sum], *p = prev->next;
10                for (int s = sum + p->val; p != cur; p = p->next)
11                    m.erase(s), s += p->next->val;
12                prev->next = cur->next;
13            } else m[sum] = cur;
14        }
15        return dummy.next;
16    }
17};