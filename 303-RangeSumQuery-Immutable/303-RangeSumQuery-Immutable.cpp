// Last updated: 11/20/2026, 4:51:03 PM
1class NumArray {
2public:
3    vector<int> prefix;
4
5    NumArray(vector<int>& nums) {
6        prefix.push_back(nums[0]);
7
8        for (int i = 1; i < nums.size(); i++) {
9            prefix.push_back(prefix[i - 1] + nums[i]);
10        }
11    }
12
13    int sumRange(int left, int right) {
14        if (left == 0) {
15            return prefix[right];
16        }
17
18        return prefix[right] - prefix[left - 1];
19    }
20};