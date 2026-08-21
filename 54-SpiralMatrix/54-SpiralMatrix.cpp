// Last updated: 8/21/2026, 2:42:57 PM
1class Solution {
2public:
3    vector<int> spiralOrder(vector<vector<int>>& matrix) {
4
5        vector<int> ans;
6
7        int top = 0;
8        int bottom = matrix.size() - 1;
9        int left = 0;
10        int right = matrix[0].size() - 1;
11
12        while (top <= bottom && left <= right) {
13
14            // Left → Right
15            for (int j = left; j <= right; j++)
16                ans.push_back(matrix[top][j]);
17
18            top++;
19
20            // Top → Bottom
21            for (int i = top; i <= bottom; i++)
22                ans.push_back(matrix[i][right]);
23
24            right--;
25
26            // Right → Left
27            if (top <= bottom) {
28                for (int j = right; j >= left; j--)
29                    ans.push_back(matrix[bottom][j]);
30
31                bottom--;
32            }
33
34            // Bottom → Top
35            if (left <= right) {
36                for (int i = bottom; i >= top; i--)
37                    ans.push_back(matrix[i][left]);
38
39                left++;
40            }
41        }
42
43        return ans;
44    }
45};