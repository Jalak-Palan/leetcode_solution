// Last updated: 7/20/2026, 5:26:02 PM
1class Solution {
2public:
3    int numberOfSteps(int num) {
4
5        int steps = 0;
6
7        while (num > 0) {
8
9            if (num % 2 == 0)
10                num = num / 2;
11            else
12                num = num - 1;
13
14            steps++;
15        }
16
17        return steps;
18    }
19};