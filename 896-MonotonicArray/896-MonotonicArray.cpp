// Last updated: 7/23/2026, 1:49:25 PM
1class Solution {
2public:
3    bool isMonotonic(vector<int>& nums) {
4        bool inc = true;
5        bool dec = true;
6
7        for(int i = 0;i<nums.size()-1;i++){
8
9            if(nums[i]>nums[i+1])
10            dec = false;
11
12            if(nums[i]<nums[i+1])
13            inc = false;
14        }
15        return inc || dec;
16        
17    }
18};