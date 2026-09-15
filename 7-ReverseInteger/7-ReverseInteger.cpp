// Last updated: 9/15/2026, 5:02:01 PM
1class Solution {
2public:
3    int reverse(int x) {
4        long long ans = 0;
5
6        while (x != 0) {
7            int digit = x % 10;
8            x = x / 10;
9
10            ans = ans * 10 + digit;
11        }
12
13        if (ans > INT_MAX || ans < INT_MIN)
14            return 0;
15
16        return ans;
17    }
18};