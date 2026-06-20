// Last updated: 6/20/2026, 7:14:40 PM
1class Solution {
2public:
3    string clearDigits(string s) {
4
5        stack<char> st;
6
7        for (char ch : s) {
8
9            if (isdigit(ch)) {
10
11                if (!st.empty())
12                    st.pop();
13            }
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
24            ans = st.top() + ans;
25            st.pop();
26        }
27
28        return ans;
29    }
30};