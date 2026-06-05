// Last updated: 6/5/2026, 2:52:42 PM
1class Solution {
2public:
3    string removeDuplicates(string s) {
4
5        stack<char> st;
6
7        for (char ch : s) {
8
9            if (!st.empty() && st.top() == ch) {
10
11                st.pop();
12            }
13
14            else {
15
16                st.push(ch);
17            }
18        }
19
20        string ans = "";
21
22        while (!st.empty()) {
23
24            ans += st.top();
25            st.pop();
26        }
27
28        reverse(ans.begin(), ans.end());
29
30        return ans;
31    }
32};