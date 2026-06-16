// Last updated: 6/16/2026, 6:16:44 PM
1class Solution {
2public:
3    int differenceOfSum(vector<int>& nums) {
4
5        int elementSum = 0;
6        int digitSum = 0;
7
8        for (int num : nums) {
9
10            elementSum += num;
11
12            while (num > 0) {
13
14                digitSum += num % 10;
15                num = num / 10;
16            }
17        }
18
19        return abs(elementSum - digitSum);
20    }
21};