// Last updated: 6/23/2026, 10:24:53 AM
class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string res = "";
        for(int i = 0 ; i < words.size() ; i++){
            res += words[i][0];
        }
        return res == s;
    }
};