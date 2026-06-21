// Last updated: 6/21/2026, 6:33:07 PM
1class Solution {
2public:
3    int alternateDigitSum(int n) {
4
5        string s = to_string(n);
6
7        int sum = 0;
8
9        for (int i = 0; i < s.size(); i++) {
10
11            if (i % 2 == 0)
12                sum += s[i] - '0';
13            else
14                sum -= s[i] - '0';
15        }
16
17        return sum;
18    }
19};