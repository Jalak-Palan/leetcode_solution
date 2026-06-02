// Last updated: 6/2/2026, 9:47:22 AM
class Solution {
public:
    string toLowerCase(string s) {
        for(int i =0; i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i] = s[i] + 32;
            }
        }
            return s;
    }
};