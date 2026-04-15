// Last updated: 4/15/2026, 10:49:59 AM
class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        sort(s.begin() , s.end());
        string a = s[0];
        string b = s[s.size() - 1];
        string ans = "";
        for(int i = 0 ; i < a.size() ; i++){
            if(a[i] == b[i]){
                ans += a[i];
            }
            else{
                break;
            }
        }
        return ans;
    }
};