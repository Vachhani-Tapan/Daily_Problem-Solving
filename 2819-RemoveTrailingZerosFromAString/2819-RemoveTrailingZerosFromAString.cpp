// Last updated: 4/15/2026, 10:45:36 AM
class Solution {
public:
    string removeTrailingZeros(string num) {
        for(int i = num.size() - 1 ; i >= 0 ; i--){
            if(num[i] == '0'){
                num.pop_back();
            }
            else{
                return num;
            }
        }
        return num;
    }
};