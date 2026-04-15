// Last updated: 4/15/2026, 10:45:28 AM
class Solution {
public:
    string finalString(string s) {
        string ans = "";
        for(auto k : s){
            if(k != 'i'){
                ans += k;
            }
            else{
                reverse(ans.begin() , ans.end());
            }
        }
        return ans;
    }
};