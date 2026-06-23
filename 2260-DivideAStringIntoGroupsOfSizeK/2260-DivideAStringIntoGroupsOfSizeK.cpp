// Last updated: 6/23/2026, 10:26:13 AM
class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> res;
        for(int i = 0 ; i < s.size() ; i += k){
            string t = s.substr(i , k);
            while(t.size() < k){
                t += fill;
            }
            res.push_back(t);
        }
        return res;
    }
};