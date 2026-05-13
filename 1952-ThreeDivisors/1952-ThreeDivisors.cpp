// Last updated: 5/13/2026, 7:24:50 PM
1class Solution {
2public:
3    bool isThree(int n) {
4        int count = 0;
5
6        for(int i = 1; i<= n ; i++){
7            if(n % i == 0){
8                count++;
9            }
10        }
11        return count == 3;
12    }
13};