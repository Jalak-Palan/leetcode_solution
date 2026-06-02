// Last updated: 6/2/2026, 9:47:34 AM
class Solution {
public:
    bool isPowerOfFour(int n) {
      if(n <= 0){
        return false;
      }  
      while (n % 4 == 0){
        n = n/4;
      }
      return n == 1;
    }
};