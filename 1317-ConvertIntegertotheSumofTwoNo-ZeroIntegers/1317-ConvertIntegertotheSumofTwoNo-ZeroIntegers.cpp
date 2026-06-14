// Last updated: 6/14/2026, 9:08:58 PM
1class Solution {
2public:
3    bool check(int n) {
4
5        while (n > 0) {
6
7            if (n % 10 == 0)
8                return false;
9
10            n = n / 10;
11        }
12
13        return true;
14    }
15
16    vector<int> getNoZeroIntegers(int n) {
17
18        for (int i = 1; i < n; i++) {
19
20            int a = i;
21            int b = n - i;
22
23            if (check(a) && check(b)) {
24
25                return {a, b};
26            }
27        }
28
29        return {};
30    }
31};