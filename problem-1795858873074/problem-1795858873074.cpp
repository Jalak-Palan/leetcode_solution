// Last updated: 11/28/2026, 3:11:13 PM
1class Solution {
2public:
3    string removeStars(string s) {
4        stack<char> st;
5
6        for(int i = 0; i < s.size(); i++) {
7
8            if(s[i] == '*') {
9                st.pop();
10            }
11            else {
12                st.push(s[i]);
13            }
14        }
15
16        string ans = "";
17
18        while(!st.empty()) {
19            ans.push_back(st.top());
20            st.pop();
21        }
22
23        reverse(ans.begin(), ans.end());
24
25        return ans;
26    }
27};