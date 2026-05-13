// Last updated: 5/13/2026, 12:31:05 PM
1class Solution {
2public:
3    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
4        set<int>s1(nums1.begin(),nums1.end());
5        set<int>ans;
6        for(int num : nums2){
7            if(s1.count(num)){
8                ans.insert(num);
9            }
10        }
11            return vector<int>(ans.begin(), ans.end());
12    }
13};