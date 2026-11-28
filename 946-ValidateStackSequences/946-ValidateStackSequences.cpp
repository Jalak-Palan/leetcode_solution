// Last updated: 11/28/2026, 3:33:53 PM
1class Solution {
2public:
3    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
4        stack<int>s;
5        int j = 0;
6        for(int i = 0;i<pushed.size();i++){
7            s.push(pushed[i]);
8
9        while(!s.empty() && s.top()==popped[j]){
10            s.pop();
11            j++;
12        }
13        }
14        return s.empty();
15    }
16};