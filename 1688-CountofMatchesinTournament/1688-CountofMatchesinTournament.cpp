// Last updated: 6/15/2026, 10:41:42 AM
1class Solution {
2public:
3    int numberOfMatches(int n) {
4
5        int match = 0;
6
7        while (n > 1) {
8
9            if (n % 2 == 0) {
10
11                match += n / 2;
12                n = n / 2;
13            }
14            else {
15
16                match += (n - 1) / 2;
17                n = (n - 1) / 2 + 1;
18            }
19        }
20
21        return match;
22    }
23};