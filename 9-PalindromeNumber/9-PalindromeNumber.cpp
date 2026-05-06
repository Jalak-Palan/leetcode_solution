// Last updated: 5/6/2026, 7:41:59 PM
1class Solution {
2public:
3    bool isPalindrome(int num) {
4        if (num < 0 || (num % 10 == 0 && num != 0))
5            return false;
6
7        int rev = 0;
8
9        while (num > rev) {
10            int last = num % 10;
11            rev = rev * 10 + last;
12            num = num / 10;
13        }
14
15        return (num == rev || num == rev / 10);
16    }
17};