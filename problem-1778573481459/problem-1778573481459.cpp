// Last updated: 5/12/2026, 1:41:21 PM
1class Solution {
2public:
3    int missingNumber(vector<int>& nums) {
4     int n = nums.size();
5
6     int total = n*(n+1)/2;
7     int sum = 0;
8     for(int i = 0;i < nums.size();i++){
9        sum += nums[i];
10     }   
11        return total - sum;
12    }
13};