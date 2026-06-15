// Last updated: 6/15/2026, 5:05:19 PM
1class Solution {
2public:
3    int minimumSum(int num) {
4
5        vector<int> digit;
6
7        while (num > 0) {
8
9            digit.push_back(num % 10);
10
11            num = num / 10;
12        }
13
14        sort(digit.begin(), digit.end());
15
16        int num1 = digit[0] * 10 + digit[2];
17        int num2 = digit[1] * 10 + digit[3];
18
19        return num1 + num2;
20    }
21};