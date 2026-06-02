// Last updated: 6/2/2026, 9:47:31 AM
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1(nums1.begin(),nums1.end());
        set<int>ans;
        for(int num : nums2){
            if(s1.count(num)){
                ans.insert(num);
            }
        }
            return vector<int>(ans.begin(), ans.end());
    }
};