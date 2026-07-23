// Last updated: 7/23/2026, 2:18:52 PM
1class Solution {
2public:
3    int countPairs(vector<int>& nums, int k) {
4        int count = 0;
5
6        for(int i = 0; i< nums.size();i++){
7            for(int j = i + 1; j < nums.size();j++){
8
9                if(nums[i]==nums[j] && (i*j) % k==0){
10                    count++;
11                }
12            }
13        }
14        return count;
15    }
16};