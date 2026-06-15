// Last updated: 6/15/2026, 11:20:47 AM
1class Solution {
2public:
3    vector<int> findAnagrams(string s, string p) {
4
5        vector<int> ans;
6
7        if (p.size() > s.size())
8            return ans;
9
10        unordered_map<char, int> mp1, mp2;
11
12        // Count frequency of pattern
13        for (char ch : p) {
14            mp1[ch]++;
15        }
16
17        int k = p.size();
18
19        // First window
20        for (int i = 0; i < k; i++) {
21            mp2[s[i]]++;
22        }
23
24        if (mp1 == mp2)
25            ans.push_back(0);
26
27        // Sliding window
28        for (int i = k; i < s.size(); i++) {
29
30            mp2[s[i]]++;              // Add new character
31
32            mp2[s[i - k]]--;          // Remove old character
33
34            if (mp2[s[i - k]] == 0)
35                mp2.erase(s[i - k]);
36
37            if (mp1 == mp2)
38                ans.push_back(i - k + 1);
39        }
40
41        return ans;
42    }
43};