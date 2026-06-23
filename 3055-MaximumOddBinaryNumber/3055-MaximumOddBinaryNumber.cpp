// Last updated: 6/23/2026, 10:24:50 AM
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count1 = 0;
        for(auto k : s){
            if(k == '1'){
                count1++;
            }
        }
        string res = "";
        for(int i = 0 ; i < count1 - 1 ; i++){
            res += "1";
        }
        for(int i = 0 ; i < s.size() - count1 ; i++){
            res += "0";
        }
        res += "1";
        return res;
    }
};