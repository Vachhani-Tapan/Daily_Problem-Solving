// Last updated: 6/23/2026, 10:27:21 AM
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        vector<char> chrs(s.size());
        string res = "";
        for(int i = 0 ; i < s.size() ; i++){
            chrs[indices[i]] = s[i];
        }
        for(auto k : chrs){
            res += k;
        }
        return res;
    }
};