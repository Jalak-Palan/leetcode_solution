// Last updated: 5/12/2026, 12:18:58 PM
1class Solution {
2public:
3    int countEven(int num) {
4        int count = 0;
5        for(int i = 1; i<=num;i++){
6            int n = i;
7            int sum = 0;
8
9            while(n>0){
10                sum += n%10;
11                n=n/10;
12            }
13            if(sum % 2 == 0){
14                count++;
15            }
16        }
17        return count;
18    }
19};