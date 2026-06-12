// Last updated: 6/12/2026, 7:18:32 PM
1class Solution {
2public:
3    bool isIsomorphic(string s, string t) {
4
5        unordered_map<char, char> mp1;
6        unordered_map<char, char> mp2;
7
8        for (int i = 0; i < s.size(); i++) {
9
10            if (mp1.count(s[i]) && mp1[s[i]] != t[i])
11                return false;
12
13            if (mp2.count(t[i]) && mp2[t[i]] != s[i])
14                return false;
15
16            mp1[s[i]] = t[i];
17            mp2[t[i]] = s[i];
18        }
19
20        return true;
21    }
22};