// Last updated: 8/25/2026, 2:11:48 PM
1class Solution {
2public:
3    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
4
5        int m = mat.size();
6        int n = mat[0].size();
7
8        vector<int> ans;
9
10        for (int d = 0; d < m + n - 1; d++) {
11
12            vector<int> temp;
13
14            for (int i = 0; i < m; i++) {
15
16                int j = d - i;
17
18                if (j >= 0 && j < n) {
19                    temp.push_back(mat[i][j]);
20                }
21            }
22
23            if (d % 2 == 0)
24                reverse(temp.begin(), temp.end());
25
26            for (int x : temp)
27                ans.push_back(x);
28        }
29
30        return ans;
31    }
32};