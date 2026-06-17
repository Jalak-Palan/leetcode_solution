// Last updated: 6/17/2026, 11:06:10 AM
1class Solution {
2public:
3    string processStr(string s) {
4
5        string result;
6
7        for (char ch : s) {
8
9            if (ch >= 'a' && ch <= 'z') {
10
11                result += ch;
12            }
13
14            else if (ch == '*') {
15
16                if (!result.empty())
17                    result.pop_back();
18            }
19
20            else if (ch == '#') {
21
22                result += result;
23            }
24
25            else if (ch == '%') {
26
27                reverse(result.begin(), result.end());
28            }
29        }
30
31        return result;
32    }
33};