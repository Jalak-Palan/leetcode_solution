// Last updated: 7/31/2026, 1:45:42 PM
1class Solution {
2public:
3    vector<int> decrypt(vector<int>& code, int k) {
4
5        int n = code.size();
6        vector<int> ans(n, 0);
7
8        if (k == 0)
9            return ans;
10
11        for (int i = 0; i < n; i++) {
12
13            int sum = 0;
14
15            if (k > 0) {
16
17                for (int j = 1; j <= k; j++)
18                    sum += code[(i + j) % n];
19
20            } else {
21
22                for (int j = 1; j <= -k; j++)
23                    sum += code[(i - j + n) % n];
24            }
25
26            ans[i] = sum;
27        }
28
29        return ans;
30    }
31};