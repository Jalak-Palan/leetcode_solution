// Last updated: 5/13/2026, 12:13:33 PM
1class Solution {
2public:
3    string removeDuplicateLetters(string s) {
4
5        vector<int> last(26);
6
7        for (int i = 0; i < s.size(); i++) {
8            last[s[i] - 'a'] = i;
9        }
10
11        vector<bool> used(26, false);
12
13        string ans = "";
14
15        for (int i = 0; i < s.size(); i++) {
16
17            char ch = s[i];
18
19            if (used[ch - 'a']) {
20                continue;
21            }
22
23            while (!ans.empty() &&
24                   ans.back() > ch &&
25                   last[ans.back() - 'a'] > i) {
26
27                used[ans.back() - 'a'] = false;
28
29                ans.pop_back();
30            }
31
32            ans += ch;
33
34            used[ch - 'a'] = true;
35        }
36
37        return ans;
38    }
39};