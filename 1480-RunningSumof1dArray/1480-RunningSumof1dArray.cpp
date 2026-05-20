// Last updated: 5/20/2026, 7:10:48 PM
1class Solution {
2public:
3    vector<int> runningSum(vector<int>& nums) {
4    partial_sum(nums.begin(), nums.end(), nums.begin());
5
6    return nums;
7    }
8};