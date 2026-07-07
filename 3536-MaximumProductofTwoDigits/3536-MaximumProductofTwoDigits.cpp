// Last updated: 7/7/2026, 2:52:13 PM
1class Solution {
2public:
3    int maxProduct(int n) {
4
5        int first = 0;
6        int second = 0;
7
8        while (n > 0) {
9
10            int digit = n % 10;
11
12            if (digit > first) {
13                second = first;
14                first = digit;
15            }
16            else if (digit > second) {
17                second = digit;
18            }
19
20            n /= 10;
21        }
22
23        return first * second;
24    }
25};