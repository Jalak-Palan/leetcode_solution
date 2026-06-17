// Last updated: 6/17/2026, 11:40:15 AM
1class Solution {
2public:
3    string simplifyPath(string path) {
4
5        stack<string> st;
6        string folder = "";
7
8        for (int i = 0; i <= path.size(); i++) {
9
10            if (i == path.size() || path[i] == '/') {
11
12                if (folder == "" || folder == ".") {
13                    // Ignore
14                }
15                else if (folder == "..") {
16
17                    if (!st.empty())
18                        st.pop();
19                }
20                else {
21
22                    st.push(folder);
23                }
24
25                folder = "";
26            }
27            else {
28
29                folder += path[i];
30            }
31        }
32
33        string ans = "";
34
35        while (!st.empty()) {
36
37            ans = "/" + st.top() + ans;
38            st.pop();
39        }
40
41        if (ans == "")
42            return "/";
43
44        return ans;
45    }
46};