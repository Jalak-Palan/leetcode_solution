// Last updated: 5/12/2026, 4:50:26 PM
1class Solution {
2public:
3    bool isPowerOfThree(int n) {
4        if(n <= 0){
5            return false;
6        }
7        while (n % 3 == 0){
8            n = n/3;
9        }
10        return n == 1;
11    }
12};