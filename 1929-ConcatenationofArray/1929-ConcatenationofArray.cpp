// Last updated: 6/16/2026, 1:56:49 PM
1class Solution {
2public:
3    vector<int> getConcatenation(vector<int>& nums) {
4
5        vector<int> ans;
6
7        for (int i = 0; i < nums.size(); i++) {
8            ans.push_back(nums[i]);
9        }
10
11        for (int i = 0; i < nums.size(); i++) {
12            ans.push_back(nums[i]);
13        }
14
15        return ans;
16    }
17};