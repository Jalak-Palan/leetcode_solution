// Last updated: 8/24/2026, 2:05:13 PM
1class Solution {
2public:
3
4    bool solve(vector<vector<char>>& board) {
5
6        for (int i = 0; i < 9; i++) {
7            for (int j = 0; j < 9; j++) {
8
9                if (board[i][j] == '.') {
10
11                    for (char num = '1'; num <= '9'; num++) {
12
13                        if (isValid(board, i, j, num)) {
14
15                            board[i][j] = num;
16
17                            if (solve(board))
18                                return true;
19
20                            board[i][j] = '.';
21                        }
22                    }
23
24                    return false;
25                }
26            }
27        }
28
29        return true;
30    }
31
32    bool isValid(vector<vector<char>>& board,
33                 int row, int col, char num) {
34
35        for (int i = 0; i < 9; i++) {
36
37            if (board[row][i] == num)
38                return false;
39
40            if (board[i][col] == num)
41                return false;
42
43            int r = 3 * (row / 3) + i / 3;
44            int c = 3 * (col / 3) + i % 3;
45
46            if (board[r][c] == num)
47                return false;
48        }
49
50        return true;
51    }
52
53    void solveSudoku(vector<vector<char>>& board) {
54        solve(board);
55    }
56};