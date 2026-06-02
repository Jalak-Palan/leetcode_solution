// Last updated: 6/2/2026, 9:47:12 AM
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans;

        for(int i = 0; i< n ; i++){
            ans.push_back(nums[i]);
            ans.push_back(nums[i+n]);
        }
        return ans;
    }
};