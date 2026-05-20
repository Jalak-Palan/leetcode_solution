// Last updated: 5/20/2026, 7:00:29 PM
1class Solution {
2public:
3    int mostWordsFound(vector<string>& sentences) {
4
5        int ans = 0;
6
7        for (string s : sentences) {
8
9            int count = 1;
10
11            for (char ch : s) {
12
13                if (ch == ' ') {
14
15                    count++;
16                }
17            }
18
19            ans = max(ans, count);
20        }
21
22        return ans;
23    }
24};