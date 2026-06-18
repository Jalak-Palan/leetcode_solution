// Last updated: 6/18/2026, 5:56:53 PM
1class Solution {
2public:
3    bool isValid(string s) {
4
5        stack<char> st;
6
7        for (char ch : s) {
8
9            if (ch == '(' || ch == '{' || ch == '[') {
10
11                st.push(ch);
12            }
13            else {
14
15                if (st.empty())
16                    return false;
17
18                if (ch == ')' && st.top() != '(')
19                    return false;
20
21                if (ch == '}' && st.top() != '{')
22                    return false;
23
24                if (ch == ']' && st.top() != '[')
25                    return false;
26
27                st.pop();
28            }
29        }
30
31        return st.empty();
32    }
33};