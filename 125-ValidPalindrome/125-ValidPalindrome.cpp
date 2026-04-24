// Last updated: 4/24/2026, 9:49:35 AM
1class Solution {
2public:
3    bool isPalindrome(string s) {
4        string word = "";
5
6        for (char ch : s) {
7            // valid character check
8            if ((ch >= 'a' && ch <= 'z') || 
9                (ch >= 'A' && ch <= 'Z') || 
10                (ch >= '0' && ch <= '9')) {
11
12                // uppercase -> lowercase
13                if (ch >= 'A' && ch <= 'Z') {
14                    ch = ch + 32;
15                }
16
17                word += ch;
18            }
19        }
20
21        // palindrome check
22        int n = word.size();
23        for (int i = 0; i < n / 2; i++) {
24            if (word[i] != word[n - i - 1]) {
25                return false;
26            }
27        }
28
29        return true;
30    }
31};