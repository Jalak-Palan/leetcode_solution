// Last updated: 6/13/2026, 2:47:09 PM
1class Solution {
2public:
3    vector<vector<int>> findMatrix(vector<int>& nums) {
4
5        vector<vector<int>> ans;
6        unordered_map<int, int> mp;
7
8        for (int num : nums) {
9
10            if (mp[num] == ans.size()) {
11                ans.push_back({});
12            }
13
14            ans[mp[num]].push_back(num);
15            mp[num]++;
16        }
17
18        return ans;
19    }
20};