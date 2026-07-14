// Last updated: 7/14/2026, 2:41:43 PM
1class Solution {
2public:
3    int longestOnes(vector<int>& nums, int k) {
4
5        int left = 0;
6        int zero = 0;
7        int ans = 0;
8
9        for (int right = 0; right < nums.size(); right++) {
10
11            if (nums[right] == 0)
12                zero++;
13
14            while (zero > k) {
15
16                if (nums[left] == 0)
17                    zero--;
18
19                left++;
20            }
21
22            ans = max(ans, right - left + 1);
23        }
24
25        return ans;
26    }
27};