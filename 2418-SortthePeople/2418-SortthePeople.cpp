// Last updated: 7/23/2026, 9:18:26 AM
1class Solution {
2public:
3    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
4
5        vector<pair<int, string>> arr;
6
7        for (int i = 0; i < names.size(); i++) {
8            arr.push_back({heights[i], names[i]});
9        }
10
11        sort(arr.rbegin(), arr.rend());
12
13        vector<string> ans;
14
15        for (auto p : arr) {
16            ans.push_back(p.second);
17        }
18
19        return ans;
20    }
21};