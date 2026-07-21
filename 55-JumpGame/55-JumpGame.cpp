// Last updated: 7/21/2026, 5:05:00 PM
1class Solution {
2public:
3    bool canJump(vector<int>& nums) {
4
5        int farthest = 0;
6
7        for (int i = 0; i < nums.size(); i++) {
8
9            if (i > farthest)
10                return false;
11
12            farthest = max(farthest, i + nums[i]);
13
14        }
15
16        return true;
17    }
18};