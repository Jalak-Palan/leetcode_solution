// Last updated: 6/2/2026, 9:47:44 AM
class Solution {
public:
    bool isPowerOfTwo(int n) {
     if(n <= 0){
        return false;
     }   
     while(n%2 == 0){
        n = n/2;
     }
     return n==1;
    }
};