// Last updated: 6/2/2026, 9:47:05 AM
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int i = 0, j = 0;

        // alternate merge
        while (i < word1.length() && j < word2.length()) {
            ans += word1[i];
            ans += word2[j];
            i++;
            j++;
        }

        // remaining characters
        while (i < word1.length()) {
            ans += word1[i];
            i++;
        }

        while (j < word2.length()) {
            ans += word2[j];
            j++;
        }

        return ans;
    }
};