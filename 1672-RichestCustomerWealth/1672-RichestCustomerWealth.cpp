// Last updated: 5/20/2026, 7:43:54 PM
1class Solution {
2public:
3    int maximumWealth(vector<vector<int>>& accounts) {
4
5        int ans = 0;
6
7        for (auto row : accounts) {
8
9            ans = max(ans, accumulate(row.begin(), row.end(), 0));
10        }
11
12        return ans;
13    }
14};