// Last updated: 6/18/2026, 2:16:40 PM
1class Solution {
2public:
3
4    int reverseNum(int n) {
5
6        int rev = 0;
7
8        while (n > 0) {
9
10            rev = rev * 10 + n % 10;
11            n = n / 10;
12        }
13
14        return rev;
15    }
16
17    bool sumOfNumberAndReverse(int num) {
18
19        for (int i = 0; i <= num; i++) {
20
21            if (i + reverseNum(i) == num)
22                return true;
23        }
24
25        return false;
26    }
27};