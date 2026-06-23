// Last updated: 6/23/2026, 10:26:45 AM
class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> m1;
        for(auto k : s){
            m1[k]++;
        }
        int freq = 0;
        for(auto k : m1){
            if(freq == 0){
                freq = k.second;
            }
            else if(k.second != freq){
                return false;
            }
        }
        return true;
    }
};