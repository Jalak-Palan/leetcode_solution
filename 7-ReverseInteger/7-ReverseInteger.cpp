// Last updated: 5/13/2026, 1:38:50 PM
1class Solution {
2public:
3    int maximumProduct(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5
6        int n = nums.size();
7
8        int a = nums[n-1]* nums[n-2]* nums[n-3];
9
10        int b = nums[0]* nums[1] * nums[n-1];
11
12        return max(a,b);
13    }
14};