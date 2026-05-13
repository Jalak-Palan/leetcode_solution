// Last updated: 5/13/2026, 6:35:02 PM
1class Solution {
2public:
3    int findNumbers(vector<int>& nums) {
4       int count = 0;
5
6       for(int num : nums){
7        int digit = 0;
8
9        while(num > 0){
10            digit++;
11            num = num /10;
12        }
13        if(digit % 2==0){
14            count ++;
15        }
16       } 
17       return count;
18    }
19};