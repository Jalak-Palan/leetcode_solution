// Last updated: 6/13/2026, 1:16:36 PM
1class Solution {
2public:
3    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
4        vector<int> ans;
5
6        for(int i=0;i<nums.size();i++){
7            int count = 0;
8
9            for(int j = 0;j<nums.size();j++){
10                if(nums[j]<nums[i]){
11                    count++;
12                }
13            }
14            ans.push_back(count);
15        }
16        return ans;
17
18    }
19};