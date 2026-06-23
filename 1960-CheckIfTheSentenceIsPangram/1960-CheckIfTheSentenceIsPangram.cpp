// Last updated: 6/23/2026, 10:26:58 AM
class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.size() < 26) return false;
        vector<bool> alpha(26,false);
        for(auto k : sentence){
            if(k >= 'a' && k <= 'z'){
                alpha[k - 'a'] = true;
            }
        }
        for(auto k : alpha){
            if(!k){
                return false;
            }
        }
        return true;
    }
};