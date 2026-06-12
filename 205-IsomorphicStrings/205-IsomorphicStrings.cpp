// Last updated: 6/12/2026, 7:23:22 PM
1class Solution {
2public:
3    bool isPalindrome(ListNode* head) {
4
5        vector<int> v;
6
7        while (head != NULL) {
8            v.push_back(head->val);
9            head = head->next;
10        }
11
12        int i = 0;
13        int j = v.size() - 1;
14
15        while (i < j) {
16
17            if (v[i] != v[j])
18                return false;
19
20            i++;
21            j--;
22        }
23
24        return true;
25    }
26};