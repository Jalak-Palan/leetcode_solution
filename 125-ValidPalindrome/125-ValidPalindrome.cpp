// Last updated: 4/24/2026, 9:45:53 AM
1class Solution {
2public:
3    bool isPalindrome(string s) {
4        string clean = "";
5
6        // Step 1: filter + lowercase
7        for (char c : s) {
8            if ((c >= 'a' && c <= 'z') || 
9                (c >= 'A' && c <= 'Z') || 
10                (c >= '0' && c <= '9')) {
11                
12                clean += tolower(c);
13            }
14        }
15
16        // Step 2: check palindrome
17        int n = clean.length();
18        for (int i = 0; i < n / 2; i++) {
19            if (clean[i] != clean[n - i - 1]) {
20                return false;
21            }
22        }
23
24        return true;
25    }
26};