// Last updated: 5/9/2026, 5:58:04 PM
1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        int ans = nums[0];
5        int count = 1;
6        for(int i = 1; i< nums.size();i++){
7            if(count == 0){
8                ans = nums[i];
9            }
10            if(ans == nums[i]){
11                count++;
12            }
13            else{
14                count--;
15            }
16        }
17        return ans;
18    }
19};