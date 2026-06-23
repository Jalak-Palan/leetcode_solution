// Last updated: 6/23/2026, 1:25:57 PM
1class Solution {
2public:
3    vector<int> selfDividingNumbers(int left, int right) {
4
5        vector<int> ans;
6
7        for (int num = left; num <= right; num++) {
8
9            int temp = num;
10            bool valid = true;
11
12            while (temp > 0) {
13
14                int digit = temp % 10;
15
16                if (digit == 0 || num % digit != 0) {
17                    valid = false;
18                    break;
19                }
20
21                temp /= 10;
22            }
23
24            if (valid)
25                ans.push_back(num);
26        }
27
28        return ans;
29    }
30};