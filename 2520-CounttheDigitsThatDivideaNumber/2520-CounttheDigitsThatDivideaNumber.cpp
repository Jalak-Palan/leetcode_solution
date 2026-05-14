// Last updated: 5/14/2026, 2:08:46 PM
1class Solution {
2public:
3    int countDigits(int num) {
4        int temp = num;
5        int count = 0;
6
7        while(temp > 0){
8            int digit = temp % 10;
9            if(num % digit == 0){
10                count++;
11            }
12            temp = temp / 10;
13        }
14        return count;
15    }
16};