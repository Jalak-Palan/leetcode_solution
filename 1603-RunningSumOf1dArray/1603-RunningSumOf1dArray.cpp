// Last updated: 6/2/2026, 9:47:11 AM
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        partial_sum(nums.begin(), nums.end(), nums.begin());

        return nums;
    }
};