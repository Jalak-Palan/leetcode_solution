// Last updated: 6/1/2026, 9:33:25 PM
1class Solution {
2public:
3    void merge(vector<int>& nums1, int m,
4               vector<int>& nums2, int n) {
5
6        int i = m - 1;
7        int j = n - 1;
8        int k = m + n - 1;
9
10        while (j >= 0) {
11
12            if (i >= 0 && nums1[i] > nums2[j]) {
13
14                nums1[k--] = nums1[i--];
15
16            } else {
17
18                nums1[k--] = nums2[j--];
19            }
20        }
21    }
22};