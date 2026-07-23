// Last updated: 7/23/2026, 1:25:28 PM
1class Solution {
2public:
3    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
4        int maxi = 0;
5
6        for(int candy : candies){
7            maxi = max(maxi,candy);
8        }
9
10        vector<bool> ans;
11
12        for(int candy : candies){
13            if(extraCandies + candy >= maxi)
14            ans.push_back(true);
15
16            else
17            ans.push_back(false);
18        }
19        return ans;
20        
21    }
22};