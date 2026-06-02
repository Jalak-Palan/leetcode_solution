// Last updated: 6/2/2026, 9:46:58 AM
class Solution {
public:
    int countEven(int num) {
        int count = 0;
        for(int i = 1; i<=num;i++){
            int n = i;
            int sum = 0;

            while(n>0){
                sum += n%10;
                n=n/10;
            }
            if(sum % 2 == 0){
                count++;
            }
        }
        return count;
    }
};