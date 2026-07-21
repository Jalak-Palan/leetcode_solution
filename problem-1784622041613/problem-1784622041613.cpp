// Last updated: 7/21/2026, 1:50:41 PM
1class Solution {
2public:
3
4    bool isVowel(char ch) {
5        return ch == 'a' || ch == 'e' || ch == 'i' ||
6               ch == 'o' || ch == 'u';
7    }
8
9    int maxVowels(string s, int k) {
10
11        int count = 0;
12
13        for (int i = 0; i < k; i++) {
14            if (isVowel(s[i]))
15                count++;
16        }
17
18        int ans = count;
19
20        for (int i = k; i < s.size(); i++) {
21
22            if (isVowel(s[i]))
23                count++;
24
25            if (isVowel(s[i - k]))
26                count--;
27
28            ans = max(ans, count);
29        }
30
31        return ans;
32    }
33};