// Last updated: 6/15/2026, 5:27:31 PM
1class Solution {
2public:
3    vector<int> buildArray(vector<int>& nums) {
4
5        vector<int> ans;
6
7        for (int i = 0; i < nums.size(); i++) {
8
9            ans.push_back(nums[nums[i]]);
10        }
11
12        return ans;
13    }
14};