// Last updated: 6/26/2026, 10:02:09 PM
1class Solution {
2public:
3    string addBinary(string a, string b) {
4
5        string ans = "";
6
7        int i = a.size() - 1;
8        int j = b.size() - 1;
9
10        int carry = 0;
11
12        while (i >= 0 || j >= 0 || carry) {
13
14            int sum = carry;
15
16            if (i >= 0) {
17                sum += a[i] - '0';
18                i--;
19            }
20
21            if (j >= 0) {
22                sum += b[j] - '0';
23                j--;
24            }
25
26            ans = char(sum % 2 + '0') + ans;
27
28            carry = sum / 2;
29        }
30
31        return ans;
32    }
33};