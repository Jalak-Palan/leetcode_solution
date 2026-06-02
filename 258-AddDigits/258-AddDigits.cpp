// Last updated: 6/2/2026, 9:47:41 AM
class Solution {
public:
    int addDigits(int num) {
       while(num >= 10){
        int sum = 0;

        while(num > 0){
            int digit = num % 10;
            sum += digit;
            num = num / 10;
        }
        num = sum;
       } 
       return num;
    }
};