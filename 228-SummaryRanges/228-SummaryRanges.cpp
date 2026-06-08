// Last updated: 6/8/2026, 6:00:31 PM
1class Solution {
2public:
3    vector<string> summaryRanges(vector<int>& nums) {
4        vector<string> ans;
5        int n = nums.size();
6        for(int i=0; i<n; i++){
7            int start = nums[i]; 
8
9            while(i+1<n && nums[i+1] == nums[i]+1){
10                i++;
11            }
12            int end = nums[i];
13            if(start == end){
14                ans.push_back(to_string(start));
15            }
16            else{
17                ans.push_back(to_string(start) + "->" + to_string(end));
18            }
19        }
20        return ans;
21    }
22};