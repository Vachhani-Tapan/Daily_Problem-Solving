// Last updated: 4/15/2026, 10:46:57 AM
class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int k = 0;
        string res = "";
        for(int i = 0 ; i < s.size() ; i++){
            if(k < spaces.size() && i == spaces[k]){
                res += ' ';
                k++;
                i--;
            }
            else{
                res += s[i];
            }
        }
        return res;
    }
};