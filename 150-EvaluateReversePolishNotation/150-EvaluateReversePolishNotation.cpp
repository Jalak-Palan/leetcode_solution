// Last updated: 6/4/2026, 8:19:28 AM
1class Solution {
2public:
3    int evalRPN(vector<string>& tokens) {
4        stack<int> st;
5
6        for(string token : tokens){
7            if(token == "+"|| token =="-" || token =="/" || token == "*"){
8                int b = st.top();
9                st.pop();
10
11                int a = st.top();
12                st.pop();
13
14                if(token == "+" ) st.push(a+b);
15
16                else if(token == "-") st.push(a-b);
17
18                else if(token == "*") st.push(a*b);
19
20                else st.push(a/b);
21
22                
23            }
24            else{
25                st.push(stoi(token));
26            }
27        }
28    return st.top();
29    }
30};