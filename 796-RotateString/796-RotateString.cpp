// Last updated: 7/7/2026, 2:47:41 PM
1class Solution {
2public:
3    bool rotateString(string s, string goal) {
4
5        if (s.size() != goal.size())
6            return false;
7
8        for (int i = 0; i < s.size(); i++) {
9
10            char first = s[0];
11
12            s.erase(0, 1);
13
14            s += first;
15
16            if (s == goal)
17                return true;
18        }
19
20        return s == goal;
21    }
22};