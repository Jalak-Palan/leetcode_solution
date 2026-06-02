// Last updated: 6/2/2026, 9:47:36 AM
class Solution {
public:
    string removeDuplicateLetters(string s) {

        vector<int> last(26);

        for (int i = 0; i < s.size(); i++) {
            last[s[i] - 'a'] = i;
        }

        vector<bool> used(26, false);

        string ans = "";

        for (int i = 0; i < s.size(); i++) {

            char ch = s[i];

            if (used[ch - 'a']) {
                continue;
            }

            while (!ans.empty() &&
                   ans.back() > ch &&
                   last[ans.back() - 'a'] > i) {

                used[ans.back() - 'a'] = false;

                ans.pop_back();
            }

            ans += ch;

            used[ch - 'a'] = true;
        }

        return ans;
    }
};