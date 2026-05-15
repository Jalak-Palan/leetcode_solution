// Last updated: 5/15/2026, 11:53:48 AM
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int mini = prices[0];
5
6        int profit = 0;
7
8        for(int i = 1; i<prices.size();i++){
9            profit = max(profit, prices[i] - mini);
10            mini = min(mini, prices[i]);
11        }
12        return profit;
13    }
14};