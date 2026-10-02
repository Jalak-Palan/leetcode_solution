// Last updated: 10/2/2026, 5:49:45 PM
1class Solution {
2public:
3
4    void solve(int n, int open, int close, string s,
5               vector<string>& ans) {
6
7        // Both brackets are used
8        if (open == n && close == n) {
9            ans.push_back(s);
10            return;
11        }
12
13        // Add opening bracket
14        if (open < n) {
15            solve(n, open + 1, close, s + "(", ans);
16        }
17
18        // Add closing bracket
19        if (close < open) {
20            solve(n, open, close + 1, s + ")", ans);
21        }
22    }
23
24    vector<string> generateParenthesis(int n) {
25        vector<string> ans;
26
27        solve(n, 0, 0, "", ans);
28
29        return ans;
30    }
31};