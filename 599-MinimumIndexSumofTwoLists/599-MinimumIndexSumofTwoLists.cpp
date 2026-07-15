// Last updated: 7/15/2026, 10:30:43 AM
1class Solution {
2public:
3    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
4
5        unordered_map<string, int> mp;
6
7        for (int i = 0; i < list1.size(); i++) {
8            mp[list1[i]] = i;
9        }
10
11        vector<string> ans;
12        int mini = INT_MAX;
13
14        for (int i = 0; i < list2.size(); i++) {
15
16            if (mp.count(list2[i])) {
17
18                int sum = i + mp[list2[i]];
19
20                if (sum < mini) {
21                    mini = sum;
22                    ans.clear();
23                    ans.push_back(list2[i]);
24                }
25                else if (sum == mini) {
26                    ans.push_back(list2[i]);
27                }
28            }
29        }
30
31        return ans;
32    }
33};