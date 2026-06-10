// Last updated: 6/10/2026, 8:38:48 PM
1class Solution {
2public:
3    int arrayPairSum(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5
6        int sum = 0;
7
8        for (int i = 0; i < nums.size(); i += 2) {
9            sum += nums[i];
10        }
11        return sum;
12    }
13};