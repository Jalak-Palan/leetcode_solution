// Last updated: 5/12/2026, 5:23:42 PM
1class Solution {
2public:
3    string addStrings(string num1, string num2) {
4
5        int i = num1.length() - 1;
6        int j = num2.length() - 1;
7
8        int carry = 0;
9
10        string result = "";
11
12        while (i >= 0 || j >= 0) {
13
14            int digit1 = 0;
15            int digit2 = 0;
16
17            if (i >= 0) {
18                digit1 = num1[i] - '0';
19                i--;
20            }
21
22            if (j >= 0) {
23                digit2 = num2[j] - '0';
24                j--;
25            }
26
27            int sum = digit1 + digit2 + carry;
28
29            carry = sum / 10;
30
31            result += (sum % 10) + '0';
32        }
33
34        if (carry > 0) {
35            result += carry + '0';
36        }
37
38        reverse(result.begin(), result.end());
39
40        return result;
41    }
42};