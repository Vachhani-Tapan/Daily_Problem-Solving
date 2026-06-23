// Last updated: 6/23/2026, 10:28:42 AM
class Solution {
public:
    string reverseWords(string s) {
        string res = "";
        string word = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                word += s[i];
            } else {
                reverse(word.begin(), word.end());
                res += ' ' +  word;
                word = "";
            }
        }
        reverse(word.begin(), word.end());
        res += ' ' + word;
        return res.substr(1);
    }
};