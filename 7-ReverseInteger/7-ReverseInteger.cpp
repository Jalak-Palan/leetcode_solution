// Last updated: 5/13/2026, 1:04:02 PM
1class Solution {
2public:
3    int fib(int n) {
4        if( n <= 1){
5            return n;
6        }
7        int a = 0;
8        int b = 1;
9
10        for(int i =2;i<=n;i++){
11            int c = a+b;
12
13            a = b;
14            b = c;
15        }
16        return b;
17    }
18};