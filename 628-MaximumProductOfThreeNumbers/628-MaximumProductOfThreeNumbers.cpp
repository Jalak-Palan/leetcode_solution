// Last updated: 6/2/2026, 9:47:24 AM
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();

        int a = nums[n-1]* nums[n-2]* nums[n-3];

        int b = nums[0]* nums[1] * nums[n-1];

        return max(a,b);
    }
};