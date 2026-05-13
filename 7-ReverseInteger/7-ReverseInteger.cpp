// Last updated: 5/13/2026, 1:17:28 PM
1class Solution {
2public:
3    bool detectCapitalUse(string word) {
4        int cap = 0;
5
6        for(char ch : word){
7            if(isupper(ch)){
8                cap++;
9            }
10        }
11        if(cap == word.size()){
12            return true;
13        }
14        if(cap == 0){
15            return true;
16        }
17        if(cap == 1 && isupper(word[0])){
18            return true;
19        }
20        return false;
21    }
22};