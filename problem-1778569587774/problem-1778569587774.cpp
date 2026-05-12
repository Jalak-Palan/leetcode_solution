// Last updated: 5/12/2026, 12:36:27 PM
1class Solution {
2public:
3    bool isPowerOfTwo(int n) {
4     if(n <= 0){
5        return false;
6     }   
7     while(n%2 == 0){
8        n = n/2;
9     }
10     return n==1;
11    }
12};