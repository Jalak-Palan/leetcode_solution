// Last updated: 4/10/2026, 3:47:27 PM
1#include <bits/stdc++.h>
2using namespace std;
3
4class Solution {
5public:
6    string reverseWords(string s) {
7        vector<string> store;
8        string word = "";
9
10        // Step 1: Extract words
11        for (int i = 0; i < s.length(); i++) {
12            if (s[i] != ' ') {
13                word += s[i];
14            } else {
15                if (word != "") {
16                    store.push_back(word);
17                    word = "";
18                }
19            }
20        }
21
22        // last word
23        if (word != "") {
24            store.push_back(word);
25        }
26
27        // Step 2: reverse and join
28        string result = "";
29        for (int i = store.size() - 1; i >= 0; i--) {
30            result += store[i];
31            if (i != 0) result += " ";
32        }
33
34        return result;
35    }
36};