// Last updated: 5/12/2026, 1:57:28 PM
1class Solution {
2public:
3    int findDuplicate(vector<int>& nums) {
4        int slow = nums[0];
5        int fast = nums[0];
6
7        do{
8            slow = nums[slow];
9            fast = nums[nums[fast]];
10        }while(slow != fast);
11
12        // find duplicates
13        slow = nums[0];
14
15        while(slow != fast){
16            slow = nums[slow];
17            fast = nums[fast];
18        }
19        return slow;
20    }
21};