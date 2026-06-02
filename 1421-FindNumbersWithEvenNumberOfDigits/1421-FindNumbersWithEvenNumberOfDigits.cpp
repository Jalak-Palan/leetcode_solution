// Last updated: 6/2/2026, 9:47:15 AM
class Solution {
public:
    int findNumbers(vector<int>& nums) {
       int count = 0;

       for(int num : nums){
        int digit = 0;

        while(num > 0){
            digit++;
            num = num /10;
        }
        if(digit % 2==0){
            count ++;
        }
       } 
       return count;
    }
};