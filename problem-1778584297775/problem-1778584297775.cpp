// Last updated: 5/12/2026, 4:41:37 PM
1class Solution {
2public:
3    int addDigits(int num) {
4       while(num >= 10){
5        int sum = 0;
6
7        while(num > 0){
8            int digit = num % 10;
9            sum += digit;
10            num = num / 10;
11        }
12        num = sum;
13       } 
14       return num;
15    }
16};