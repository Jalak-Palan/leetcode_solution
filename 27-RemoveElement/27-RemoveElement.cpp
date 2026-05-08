// Last updated: 5/8/2026, 1:25:37 PM
1class Solution {
2public:
3    int removeElement(vector<int>& nums, int val) {
4        int k =0;
5
6        for(int i =0;i<nums.size();i++){
7            if(nums[i] != val){
8                nums[k] = nums[i];
9                k++;
10            }
11        }
12        return k;
13    }
14};