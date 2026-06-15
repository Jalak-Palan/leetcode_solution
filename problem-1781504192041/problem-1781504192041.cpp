// Last updated: 6/15/2026, 11:46:32 AM
1class Solution {
2public:
3    bool areOccurrencesEqual(string s) {
4
5        unordered_map<char, int> mp;
6
7        // Count frequency
8        for (char ch : s) {
9            mp[ch]++;
10        }
11
12        int freq = mp.begin()->second;
13
14        for (auto it : mp) {
15
16            if (it.second != freq)
17                return false;
18        }
19
20        return true;
21    }
22};