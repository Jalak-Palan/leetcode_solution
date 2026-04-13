// Last updated: 4/13/2026, 3:27:19 PM
1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        int k =1;
5        for(int i=1;i<nums.size();++i){
6            if(nums[i] != nums[i-1]){
7                nums[k] = nums[i];
8                k++;
9            }
10        }
11        return k;
12    }
13};