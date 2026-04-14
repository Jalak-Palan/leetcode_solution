// Last updated: 4/14/2026, 3:48:50 PM
1class Solution {
2public:
3    string longestCommonPrefix(vector<string>& strs) {
4        if(strs.empty()) return "";
5
6        string subString = strs[0];
7
8        for(int i = 1; i < strs.size(); ++i) {
9            while(strs[i].find(subString) != 0) {
10                subString.pop_back();
11
12                if(subString.empty()) return "";
13            }
14        }
15
16        return subString;
17    }
18};