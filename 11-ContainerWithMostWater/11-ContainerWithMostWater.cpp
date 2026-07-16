// Last updated: 7/16/2026, 2:02:21 PM
1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4
5        int left = 0;
6        int right = height.size() - 1;
7
8        int ans = 0;
9
10        while (left < right) {
11
12            int width = right - left;
13
14            int h = min(height[left], height[right]);
15
16            int area = width * h;
17
18            ans = max(ans, area);
19
20            if (height[left] < height[right])
21                left++;
22            else
23                right--;
24        }
25
26        return ans;
27    }
28};