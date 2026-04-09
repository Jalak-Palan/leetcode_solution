// Last updated: 4/9/2026, 6:13:28 PM
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for (string s : strs) {
            string key = s;
            sort(key.begin(), key.end()); 
            mp[key].push_back(s);
        }

        vector<vector<string>> result;
        for (auto& s : mp) {
            result.push_back(s.second);
        }

        return result;
    }
};