// Last updated: 6/23/2026, 10:27:36 AM
class Solution {
public:
    int maxPower(string s) {
        int Maxcount = 1;
        int Currcount = 1;
        for(int i = 0 ; i < s.size() - 1 ; i++){
            if(s[i] == s[i+1]){
                Currcount++;
            }
            else{
                Currcount = 1;
            }
            Maxcount = max(Maxcount , Currcount);
        }
        return Maxcount;
    }
};