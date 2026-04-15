// Last updated: 4/15/2026, 10:47:37 AM
class Solution {
public:
    string mergeAlternately(string s1, string s2) {
        int i = 0; 
        int j = 0;
        string res = "";
        while(i < s1.size() && j < s2.size()){
            res += s1[i];
            res += s2[j];
            i++;
            j++;
        }
        while(j < s2.size()){
            res += s2[j];
            j++;
        }
        while(i < s1.size()){
            res += s1[i];
            i++;
        }
        return res;
    }
};