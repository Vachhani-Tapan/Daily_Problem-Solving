// Last updated: 4/15/2026, 10:48:21 AM
class Solution {
public:
    string greatestLetter(string s) {
        map<char,int> m1;
        for(auto k : s) m1[k]++;
        sort(s.begin() , s.end());
        string ans = "";
        for(int i = 0 ; i < s.size() ; i++){
            char low = tolower(s[i]);
            char upp = toupper(s[i]);
            if(m1[low] && m1[upp]){
                ans = upp;
            }
        }
        return ans;
    }
};