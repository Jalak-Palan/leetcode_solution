// Last updated: 6/29/2026, 9:15:06 PM
1class Solution {
2public:
3    bool judgeCircle(string moves) {
4
5        int x = 0;
6        int y = 0;
7
8        for (char ch : moves) {
9
10            if (ch == 'U')
11                y++;
12
13            else if (ch == 'D')
14                y--;
15
16            else if (ch == 'L')
17                x--;
18
19            else
20                x++;
21        }
22
23        return x == 0 && y == 0;
24    }
25};