// Last updated: 6/15/2026, 11:30:20 AM
1class Solution {
2public:
3    bool checkIfPangram(string sentence) {
4
5        set<char> st;
6
7        for (char ch : sentence) {
8            st.insert(ch);
9        }
10
11        return st.size() == 26;
12    }
13};