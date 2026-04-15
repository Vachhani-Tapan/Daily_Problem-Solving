// Last updated: 4/15/2026, 10:49:01 AM
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int j = 0;
        while(i < s.size() , j < t.size()){
            if(s[i] == t[j]) i++;
            j++;
        }
        return (i == s.size());
    }
};