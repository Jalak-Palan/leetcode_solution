// Last updated: 6/16/2026, 6:19:47 PM
1class Solution {
2public:
3    vector<int> leftRightDifference(vector<int>& nums) {
4
5        int totalSum = 0;
6
7        for (int num : nums) {
8            totalSum += num;
9        }
10
11        vector<int> ans;
12
13        int leftSum = 0;
14
15        for (int i = 0; i < nums.size(); i++) {
16
17            totalSum -= nums[i];
18
19            ans.push_back(abs(leftSum - totalSum));
20
21            leftSum += nums[i];
22        }
23
24        return ans;
25    }
26};