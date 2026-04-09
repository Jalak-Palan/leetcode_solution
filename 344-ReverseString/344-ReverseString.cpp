// Last updated: 4/9/2026, 6:13:22 PM
class Solution {
public:
    void reverseString(vector<char>& s) {
       int left=0;
       int right = s.size()-1;
    //    loop
    while(left<right){
        // swap stl algorithum
        swap(s[left],s[right]);
        ++left;
        --right;
    }
    
    }
};