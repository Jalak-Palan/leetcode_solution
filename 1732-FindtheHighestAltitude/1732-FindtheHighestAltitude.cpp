// Last updated: 8/5/2026, 4:24:44 PM
1class Solution {
2public:
3    int largestAltitude(vector<int>& gain) {
4
5        int current = 0;
6        int highest = 0;
7
8        for (int i = 0; i < gain.size(); i++) {
9
10            current += gain[i];
11
12            highest = max(highest, current);
13        }
14
15        return highest;
16    }
17};