// Last updated: 4/15/2026, 11:19:59 AM
1class Solution {
2public:
3    int firstUniqChar(string s) {
4        unordered_map<char,int> freq;
5
6        for(char ch : s){
7            freq[ch]++;
8        }
9
10        for(int i = 0; i < s.length(); i++){
11            if(freq[s[i]] == 1) {
12                return i;
13            }
14        }
15
16        return -1;
17    }
18};