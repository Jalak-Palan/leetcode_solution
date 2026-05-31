// Last updated: 5/31/2026, 8:48:44 PM
1class Solution {
2public:
3    bool isSameAfterReversals(int num) {
4        return num == 0 || num % 10 != 0;
5    }
6};