// Last updated: 5/5/2026, 7:22:05 PM
1class Solution {
2public:
3    bool backspaceCompare(string s, string t) {
4        
5        int i = s.length() - 1;
6        int j = t.length() - 1;
7
8        int skipS = 0, skipT = 0;
9
10        while (i >= 0 || j >= 0) {
11
12            // process string s
13            while (i >= 0) {
14                if (s[i] == '#') {
15                    skipS++;
16                    i--;
17                }
18                else if (skipS > 0) {
19                    skipS--;
20                    i--;
21                }
22                else {
23                    break;
24                }
25            }
26
27            // process string t
28            while (j >= 0) {
29                if (t[j] == '#') {
30                    skipT++;
31                    j--;
32                }
33                else if (skipT > 0) {
34                    skipT--;
35                    j--;
36                }
37                else {
38                    break;
39                }
40            }
41
42            // compare characters
43            if (i >= 0 && j >= 0 && s[i] != t[j]) {
44                return false;
45            }
46
47            // if one string ends before other
48            if ((i >= 0) != (j >= 0)) {
49                return false;
50            }
51
52            i--;
53            j--;
54        }
55
56        return true;
57    }
58};