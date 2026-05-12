// Last updated: 5/12/2026, 5:41:41 PM
1class Solution {
2public:
3    string addStrings(string num1, string num2) {
4        int i = num1.size() - 1;
5        int j = num2.size() - 1;
6        int carry = 0;
7        string ans = "";
8
9        while(i>=0 || j>=0 || carry){
10            int sum = carry;
11
12            if(i >= 0){
13                sum += num1[i] - '0';
14                i--;
15            }
16            if(j >= 0){
17                sum += num2[j] - '0';
18                j--;
19            }
20            ans += (sum % 10) + '0';
21
22            carry = sum / 10;
23        }
24        reverse(ans.begin(), ans.end());
25        return ans;
26    }
27};