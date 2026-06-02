// Last updated: 6/2/2026, 9:47:25 AM
class Solution {
public:
    bool detectCapitalUse(string word) {
        int cap = 0;

        for(char ch : word){
            if(isupper(ch)){
                cap++;
            }
        }
        if(cap == word.size()){
            return true;
        }
        if(cap == 0){
            return true;
        }
        if(cap == 1 && isupper(word[0])){
            return true;
        }
        return false;
    }
};