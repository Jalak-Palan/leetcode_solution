// Last updated: 6/2/2026, 9:46:56 AM
class Solution {
public:
    char repeatedCharacter(string s) {
        set<int>seen;

        for(char ch : s){
            if(seen.count(ch)){
                return ch;
            }
            seen.insert(ch);
        }
        return ' ';
    }
};