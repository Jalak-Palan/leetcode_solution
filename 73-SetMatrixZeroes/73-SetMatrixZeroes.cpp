// Last updated: 8/20/2026, 2:04:15 PM
1class Solution {
2public:
3    void setZeroes(vector<vector<int>>& matrix) {
4
5        int m = matrix.size();
6        int n = matrix[0].size();
7        vector<int> row(m, 0);
8        vector<int> col(n, 0);
9
10        for (int i = 0; i < m; i++) {
11            for (int j = 0; j < n; j++) {
12                if (matrix[i][j] == 0) {
13                    row[i] = 1;
14                    col[j] = 1;
15                }
16            }
17        }
18        for (int i = 0; i < m; i++) {
19            for (int j = 0; j < n; j++) {
20                if (row[i] || col[j])
21                    matrix[i][j] = 0;
22            }
23        }
24    }
25};