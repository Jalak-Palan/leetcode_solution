// Last updated: 5/21/2026, 5:14:42 PM
1class Solution {
2public:
3    string truncateSentence(string s, int k) {
4
5        int count = 0;
6
7        for (int i = 0; i < s.size(); i++) {
8
9            if (s[i] == ' ') {
10
11                count++;
12            }
13
14            if (count == k) {
15
16                return s.substr(0, i);
17            }
18        }
19
20        return s;
21    }
22};