// Last updated: 6/23/2026, 10:25:52 AM
class Solution {
public:
    int countAsterisks(string s) {
        bool bar = false;
        int count = 0;
        for(auto k : s){
            if(k == '*' && !bar){
                count++;
            }
            else if(k == '|'){
                bar = !bar;
            }
        }
        return count;
    }
};