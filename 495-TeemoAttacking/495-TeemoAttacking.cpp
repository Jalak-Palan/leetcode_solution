// Last updated: 7/21/2026, 4:59:54 PM
1class Solution {
2public:
3    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
4
5        int ans = 0;
6
7        for (int i = 0; i < timeSeries.size() - 1; i++) {
8
9            int gap = timeSeries[i + 1] - timeSeries[i];
10
11            ans += min(gap, duration);
12        }
13
14        ans += duration;
15
16        return ans;
17    }
18};