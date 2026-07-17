// Last updated: 7/17/2026, 1:36:24 PM
1class Solution {
2public:
3    int findLHS(vector<int>& nums) {
4        unordered_map<int, int> mp;
5
6        for (int num : nums)
7            mp[num]++;
8
9        int ans = 0;
10
11        for (auto it : mp) {
12
13            if (mp.count(it.first + 1)) {
14
15                ans = max(ans, it.second + mp[it.first + 1]);
16            }
17        }
18
19        return ans;
20    }
21};