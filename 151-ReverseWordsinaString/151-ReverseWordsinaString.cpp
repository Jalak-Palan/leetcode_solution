// Last updated: 4/10/2026, 3:07:34 PM
1class Solution {
2public:
3    string reverseWords(string s) {
4          stringstream ss(s);
5        string word, result = "";
6
7        while (ss >> word) {
8            result = word + (result.empty() ? "" : " " + result);
9        }
10
11        return result;
12    }
13};