// Last updated: 6/4/2026, 11:04:01 AM
1class Solution {
2public:
3    string decode(string &s, int &i) {
4        string res = "";
5
6        while (i < s.size() && s[i] != ']') {
7
8            if (isalpha(s[i])) {
9                res += s[i];
10                i++;
11            }
12            else if (isdigit(s[i])) {
13
14                int num = 0;
15                while (i < s.size() && isdigit(s[i])) {
16                    num = num * 10 + (s[i] - '0');
17                    i++;
18                }
19
20                i++; // skip '['
21
22                string temp = decode(s, i);
23
24                i++; // skip ']'
25
26                while (num) {
27                    res += temp;
28                    num--;
29                }
30            }
31        }
32
33        return res;
34    }
35
36    string decodeString(string s) {
37        int i = 0;
38        return decode(s, i);
39    }
40};