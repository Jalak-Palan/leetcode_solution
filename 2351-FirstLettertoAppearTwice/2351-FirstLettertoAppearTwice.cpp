// Last updated: 5/20/2026, 6:49:13 PM
1class Solution {
2public:
3    char repeatedCharacter(string s) {
4        set<int>seen;
5
6        for(char ch : s){
7            if(seen.count(ch)){
8                return ch;
9            }
10            seen.insert(ch);
11        }
12        return ' ';
13    }
14};