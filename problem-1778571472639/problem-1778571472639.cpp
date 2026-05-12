// Last updated: 5/12/2026, 1:07:52 PM
1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4       if(s.size() != t.size()){
5        return false;
6       } 
7
8       int count [26] = {0};
9
10       for(int i =0; i<s.size();i++){
11        count[s[i] - 'a']++;
12        count[t[i] - 'a']--;
13       }
14
15       for(int i = 0; i< 26;i++){
16        if (count[i] != 0){
17            return false;
18        }
19       }
20       return true;
21    }
22};