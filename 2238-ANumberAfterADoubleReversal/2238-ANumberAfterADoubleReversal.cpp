// Last updated: 6/2/2026, 9:47:00 AM
class Solution {
public:
    bool isSameAfterReversals(int num) {
        return num == 0 || num % 10 != 0;
    }
};