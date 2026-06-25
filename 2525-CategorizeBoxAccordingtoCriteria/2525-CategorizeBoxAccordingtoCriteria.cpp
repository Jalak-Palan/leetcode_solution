// Last updated: 6/25/2026, 9:25:11 PM
1class Solution {
2public:
3    string categorizeBox(int length, int width, int height, int mass) {
4
5        long long volume = 1LL * length * width * height;
6
7        bool bulky = (length >= 10000 ||
8                      width >= 10000 ||
9                      height >= 10000 ||
10                      volume >= 1000000000);
11
12        bool heavy = (mass >= 100);
13
14        if (bulky && heavy)
15            return "Both";
16
17        if (bulky)
18            return "Bulky";
19
20        if (heavy)
21            return "Heavy";
22
23        return "Neither";
24    }
25};