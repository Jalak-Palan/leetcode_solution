// Last updated: 6/16/2026, 1:32:30 PM
1class Solution {
2public:
3    int compareVersion(string version1, string version2) {
4
5        int i = 0, j = 0;
6
7        while (i < version1.size() || j < version2.size()) {
8
9            int num1 = 0;
10            int num2 = 0;
11
12            while (i < version1.size() && version1[i] != '.') {
13                num1 = num1 * 10 + (version1[i] - '0');
14                i++;
15            }
16
17            while (j < version2.size() && version2[j] != '.') {
18                num2 = num2 * 10 + (version2[j] - '0');
19                j++;
20            }
21
22            if (num1 > num2)
23                return 1;
24
25            if (num1 < num2)
26                return -1;
27
28            i++;
29            j++;
30        }
31
32        return 0;
33    }
34};