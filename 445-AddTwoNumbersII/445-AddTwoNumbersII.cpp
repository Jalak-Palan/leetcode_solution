// Last updated: 8/25/2026, 5:10:26 PM
1class Solution {
2public:
3    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
4
5        stack<int> a, b;
6
7        while (l1) {
8            a.push(l1->val);
9            l1 = l1->next;
10        }
11
12        while (l2) {
13            b.push(l2->val);
14            l2 = l2->next;
15        }
16
17        ListNode* head = NULL;
18        int carry = 0;
19
20        while (!a.empty() || !b.empty() || carry) {
21
22            int sum = carry;
23
24            if (!a.empty()) {
25                sum += a.top();
26                a.pop();
27            }
28
29            if (!b.empty()) {
30                sum += b.top();
31                b.pop();
32            }
33
34            carry = sum / 10;
35
36            head = new ListNode(sum % 10, head);
37        }
38
39        return head;
40    }
41};