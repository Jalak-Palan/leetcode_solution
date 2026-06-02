// Last updated: 6/2/2026, 9:46:52 AM
class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n % 2 == 0){
            return n;
        }
        return n * 2;
    }
};