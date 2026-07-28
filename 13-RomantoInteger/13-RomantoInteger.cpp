// Last updated: 7/28/2026, 8:12:27 AM
1class Solution {
2public:
3    int romanToInt(string s) {
4
5        unordered_map<char, int> mp = {
6            {'I',1},
7            {'V',5},
8            {'X',10},
9            {'L',50},
10            {'C',100},
11            {'D',500},
12            {'M',1000}
13        };
14
15        int ans = 0;
16
17        for (int i = 0; i < s.size(); i++) {
18
19            if (i + 1 < s.size() && mp[s[i]] < mp[s[i + 1]])
20                ans -= mp[s[i]];
21            else
22                ans += mp[s[i]];
23        }
24
25        return ans;
26    }
27};