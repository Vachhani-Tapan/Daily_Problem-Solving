// Last updated: 4/15/2026, 10:46:35 AM
class Solution {
public:
    bool digitCount(string num) {
        map<int,int> m1;
        for(auto k : num) m1[k - '0']++;
        for(int i = 0 ; i < num.size() ; i++){
            if(m1[i] != num[i] - '0'){
                return false;
            }
        }
        return true;
    }
};