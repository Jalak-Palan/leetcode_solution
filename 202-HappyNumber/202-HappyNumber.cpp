// Last updated: 5/15/2026, 11:47:57 AM
1class Solution {
2public:
3    bool isHappy(int n) {
4      set<int> seen;
5
6      while(n !=1 && seen.count(n)==0){
7        seen.insert(n);
8
9        int sum = 0;
10
11        while(n>0){
12            int digit = n % 10;
13            sum += digit * digit;
14
15            n = n/10;
16        }
17        n = sum;
18      }
19
20      return n==1;
21    }
22};