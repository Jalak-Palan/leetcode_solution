// Last updated: 6/1/2026, 11:18:55 AM
1class StockSpanner {
2public:
3    stack<pair<int,int>> st;
4    StockSpanner() {
5    }
6    
7    int next(int price) {
8        int span = 1;
9        while(!st.empty() && st.top().first <= price){
10            span += st.top().second;
11            st.pop();
12        }
13        st.push({price,span});
14        return span;
15        
16    }
17};
18