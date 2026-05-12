// Last updated: 5/12/2026, 4:27:52 PM
1class Solution {
2public:
3    bool isHappy(int n) {
4        set<int>seen;
5
6        while(n !=1 && seen.count(n) == 0){
7            seen.insert(n);
8            int sum = 0;
9
10            while(n>0){
11                int digit = n%10;
12                sum += digit * digit;
13                n = n/10;
14            }
15            n = sum;
16        }
17        return n == 1;
18    }
19};