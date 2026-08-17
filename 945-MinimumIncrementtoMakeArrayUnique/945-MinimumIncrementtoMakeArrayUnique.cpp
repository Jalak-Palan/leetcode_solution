// Last updated: 8/17/2026, 1:28:23 PM
1class Solution {
2public:
3    int minIncrementForUnique(vector<int>& nums) {
4
5        sort(nums.begin(), nums.end());
6
7        int next = 0;
8        int ans = 0;
9
10        for (int x : nums) {
11
12            if (x >= next) {
13                next = x + 1;
14            }
15            else {
16                ans += next - x;
17                next++;
18            }
19        }
20
21        return ans;
22    }
23};