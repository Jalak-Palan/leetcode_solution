// Last updated: 6/1/2026, 6:58:54 PM
1class Solution {
2public:
3    vector<int> dailyTemperatures(vector<int>& temperatures) {
4
5        stack<int> st;
6
7        vector<int> ans(temperatures.size(), 0);
8
9        for (int i = 0; i < temperatures.size(); i++) {
10
11            while (!st.empty() &&
12                   temperatures[i] > temperatures[st.top()]) {
13
14                int idx = st.top();
15
16                st.pop();
17
18                ans[idx] = i - idx;
19            }
20
21            st.push(i);
22        }
23
24        return ans;
25    }
26};