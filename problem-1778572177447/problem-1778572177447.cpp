// Last updated: 5/12/2026, 1:19:37 PM
1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4        int j = 0;
5
6        for (int i =0; i<nums.size();i++){
7            if(nums[i] != 0){
8                swap(nums[i] , nums[j]);
9
10                j++;
11            }
12        }
13    }
14};