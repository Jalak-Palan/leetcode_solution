// Last updated: 5/12/2026, 5:20:11 PM
1class Solution {
2public:
3    string addStrings(string num1, string num2) {
4
5        int i = num1.size() - 1;
6        int j = num2.size() - 1;
7
8        int carry = 0;
9
10        string ans = "";
11
12        while (i >= 0 || j >= 0 || carry) {
13
14            int sum = carry;
15
16            if (i >= 0) {
17                sum += num1[i] - '0';
18                i--;
19            }
20
21            if (j >= 0) {
22                sum += num2[j] - '0';
23                j--;
24            }
25
26            ans += (sum % 10) + '0';
27
28            carry = sum / 10;
29        }
30
31        reverse(ans.begin(), ans.end());
32
33        return ans;
34    }
35};