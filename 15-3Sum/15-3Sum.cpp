// Last updated: 9/30/2026, 5:47:44 PM
1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        vector<vector<int>> ans;
5
6        sort(nums.begin(), nums.end());
7
8        for (int i = 0; i < nums.size(); i++) {
9
10            if (i > 0 && nums[i] == nums[i - 1])
11                continue;
12
13            int left = i + 1;
14            int right = nums.size() - 1;
15
16            while (left < right) {
17
18                int sum = nums[i] + nums[left] + nums[right];
19
20                if (sum == 0) {
21                    ans.push_back({nums[i], nums[left], nums[right]});
22
23                    while (left < right && nums[left] == nums[left + 1])
24                        left++;
25
26                    while (left < right && nums[right] == nums[right - 1])
27                        right--;
28
29                    left++;
30                    right--;
31                }
32                else if (sum < 0) {
33                    left++;
34                }
35                else {
36                    right--;
37                }
38            }
39        }
40
41        return ans;
42    }
43};