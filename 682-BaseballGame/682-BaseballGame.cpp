// Last updated: 7/25/2026, 11:17:24 PM
1class Solution {
2public:
3    int calPoints(vector<string>& operations) {
4
5        stack<int> st;
6
7        for (string op : operations) {
8
9            if (op == "+") {
10
11                int first = st.top();
12                st.pop();
13
14                int second = st.top();
15
16                st.push(first);
17                st.push(first + second);
18
19            }
20            else if (op == "D") {
21
22                st.push(st.top() * 2);
23
24            }
25            else if (op == "C") {
26
27                st.pop();
28
29            }
30            else {
31
32                st.push(stoi(op));
33            }
34        }
35
36        int sum = 0;
37
38        while (!st.empty()) {
39
40            sum += st.top();
41            st.pop();
42        }
43
44        return sum;
45    }
46};