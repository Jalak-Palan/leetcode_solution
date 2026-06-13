// Last updated: 6/13/2026, 1:05:50 PM
1class Solution {
2public:
3    int maxFreqSum(string s) {
4
5        int freq[26] = {0};
6
7        for (char ch : s) {
8            freq[ch - 'a']++;
9        }
10
11        int vowel = 0;
12        int consonant = 0;
13
14        for (int i = 0; i < 26; i++) {
15
16            char ch = 'a' + i;
17
18            if (ch == 'a' || ch == 'e' || ch == 'i' ||
19                ch == 'o' || ch == 'u') {
20
21                vowel = max(vowel, freq[i]);
22            }
23            else {
24
25                consonant = max(consonant, freq[i]);
26            }
27        }
28
29        return vowel + consonant;
30    }
31};