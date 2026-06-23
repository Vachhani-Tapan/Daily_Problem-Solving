// Last updated: 6/23/2026, 10:23:47 AM
class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int a = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == 'a'){
                a++;
            }
            else{
                a--;
            }
        }
        return abs(a);
    }
};