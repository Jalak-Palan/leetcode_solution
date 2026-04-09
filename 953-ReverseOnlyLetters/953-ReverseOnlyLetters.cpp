// Last updated: 4/9/2026, 6:13:21 PM
class Solution {
public:
    string reverseOnlyLetters(string s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {

            // move left until letter
            while (left < right && !((s[left] >= 'a' && s[left] <= 'z') || 
                                     (s[left] >= 'A' && s[left] <= 'Z'))) {
                left++;
            }

            // move right until letter
            while (left < right && !((s[right] >= 'a' && s[right] <= 'z') || 
                                      (s[right] >= 'A' && s[right] <= 'Z'))) {
                right--;
            }

            // swap letters
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;

            left++;
            right--;
        }

        return s;
    }
};