// Last updated: 5/14/2026, 1:44:09 PM
1class Solution {
2public:
3    bool isBalanced(string num) {
4        int even = 0;
5        int odd = 0;
6
7        for(int i = 0; i< num.size();i++){
8            if( i % 2 == 0){
9                even += num[i] - '0';
10            }
11            else{
12                odd += num[i] - '0';
13            }
14        }
15        return even == odd;
16    }
17};