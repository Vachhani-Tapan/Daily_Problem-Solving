// Last updated: 6/23/2026, 10:26:23 AM
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto k : words){
            string res = k;
            reverse(res.begin() , res.end());
            if(res == k){
                return k;
            }
        }
        return "";
    }
};