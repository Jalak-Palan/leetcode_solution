// Last updated: 6/2/2026, 9:47:56 AM
class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length() - 1;
        int length = 0;

        while (i >= 0 && s[i] == ' ') i--;   // skip spaces
        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }

        return length;
    }
};