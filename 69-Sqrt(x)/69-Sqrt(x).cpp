// Last updated: 6/21/2026, 6:35:27 PM
1class Solution {
2public:
3    int mySqrt(int x) {
4
5        int ans = 0;
6
7        for (long long i = 1; i * i <= x; i++) {
8
9            ans = i;
10        }
11
12        return ans;
13    }
14};