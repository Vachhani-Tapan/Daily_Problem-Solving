// Last updated: 4/15/2026, 10:47:36 AM
class Solution {
public:
    int secondHighest(string s) {
        int lar = -1;
        int sec = -1;
        for(int i = 0 ; i < s.size() ; i++){
            if(isdigit(s[i])){
                int num = s[i] - '0';
                if(num > lar){
                    sec = lar;
                    lar = num;
                }
                else if(num < lar && num > sec){
                    sec = num;
                }
            }
        }
        return sec;
    }
};