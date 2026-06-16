// Last updated: 6/16/2026, 6:21:14 PM
1class Solution {
2public:
3    int sumOfMultiples(int n) {
4
5        int sum = 0;
6
7        for (int i = 1; i <= n; i++) {
8
9            if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0) {
10
11                sum += i;
12            }
13        }
14
15        return sum;
16    }
17};