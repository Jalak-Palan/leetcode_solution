// Last updated: 5/13/2026, 7:33:44 PM
1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4        int ans = 0;
5
6        for(int num : nums){
7            ans ^= num;
8        }
9        return ans;
10    }
11};