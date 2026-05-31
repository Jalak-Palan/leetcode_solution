// Last updated: 5/31/2026, 8:55:03 PM
1class Solution {
2public:
3    vector<int> runningSum(vector<int>& nums) {
4        partial_sum(nums.begin(), nums.end(), nums.begin());
5
6        return nums;
7    }
8};