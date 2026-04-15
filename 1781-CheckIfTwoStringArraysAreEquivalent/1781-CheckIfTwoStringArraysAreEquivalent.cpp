// Last updated: 4/15/2026, 10:47:50 AM
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1 = "";
        string s2 = "";
        for(auto k : word1){
            s1 += k;
        }
        for(auto k : word2){
            s2 += k;
        }
        return (s1 == s2);
    }
};