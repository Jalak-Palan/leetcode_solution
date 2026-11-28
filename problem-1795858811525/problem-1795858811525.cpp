// Last updated: 11/28/2026, 3:10:11 PM
1class Solution {
2public:
3    string removeStars(string s) {
4        string ans = "";
5
6        for(int i = 0; i < s.size(); i++) {
7
8            if(s[i] == '*') {
9                ans.pop_back();
10            }
11            else {
12                ans.push_back(s[i]);
13            }
14        }
15
16        return ans;
17    }
18};