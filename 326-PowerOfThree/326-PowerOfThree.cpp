// Last updated: 6/2/2026, 9:47:35 AM
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0){
            return false;
        }
        while (n % 3 == 0){
            n = n/3;
        }
        return n == 1;
    }
};