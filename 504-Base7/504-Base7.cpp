// Last updated: 4/15/2026, 10:48:52 AM
class Solution {
public:
    string convertToBase7(int num) {
        if(num == 0) return "0";
        int isNeg = false;
        if(num < 0) isNeg = true;
        num = abs(num);
        string s = "";
        while(num > 0){
            s = char((num % 7) + '0') + s;
            num = num / 7;
        }
        if(isNeg) s = '-' + s;
        return s;
    }
};