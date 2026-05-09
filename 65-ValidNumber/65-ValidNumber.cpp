// Last updated: 5/9/2026, 5:37:22 PM
1class Solution {
2public:
3    bool isNumber(string s) {
4        bool num = false;
5        bool dot = false;
6        bool e = false;
7
8        for (int i =0; i<s.size();i++){
9            if(isdigit(s[i])){
10                num = true;
11            }
12
13            else if(s[i]=='.'){
14                if(dot || e) return false;
15                dot = true;
16            }
17            else if(s[i]=='e' || s[i]=='E'){
18                if(e || !num) return false;
19                e = true;
20                num = false;
21            }
22            else if(s[i] == '+' || s[i] == '-'){
23                if(i>0 && s[i-1] !='e' && s[i-1] != 'E') return false;
24            }
25            else{
26                return false;
27            }
28        }
29        return num;
30    }
31};