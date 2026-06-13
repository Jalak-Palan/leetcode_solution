// Last updated: 6/13/2026, 1:53:02 PM
1class Solution {
2public:
3    string reversePrefix(string word, char ch) {
4
5        int index = word.find(ch);
6
7        if (index == -1)
8            return word;
9
10        reverse(word.begin(), word.begin() + index + 1);
11
12        return word;
13    }
14};