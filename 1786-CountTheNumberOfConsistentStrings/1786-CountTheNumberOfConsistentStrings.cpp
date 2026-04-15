// Last updated: 4/15/2026, 10:47:48 AM
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;
        set<char> s1(allowed.begin() , allowed.end());
        for(int i = 0 ; i < words.size() ; i++){
            bool iscon = true;
            for(int j = 0 ; j < words[i].size() ; j++){
                if(!s1.count(words[i][j])){
                    iscon = false;
                }
            }
            if(iscon) count++;
        }
        return count;
    }
};