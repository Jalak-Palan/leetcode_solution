// Last updated: 7/8/2026, 3:03:41 PM
1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4
5        int count = 0;
6        int maxi = 0;
7
8        for (int num : nums) {
9
10            if (num == 1) {
11
12                count++;
13                maxi = max(maxi, count);
14            }
15            else {
16
17                count = 0;
18            }
19        }
20
21        return maxi;
22    }
23};