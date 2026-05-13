// Last updated: 5/13/2026, 12:53:28 PM
1class Solution {
2public:
3    bool checkPerfectNumber(int num) {
4        if(num == 1){
5            return false;
6        }
7        int sum = 1;
8        for(int i = 2; i * i<=num;i++){
9            if(num % i == 0){
10                sum += i;
11            
12            if(i != num/i){
13                sum += num / i;
14            }
15            }
16        }
17        return sum == num;
18    }
19};