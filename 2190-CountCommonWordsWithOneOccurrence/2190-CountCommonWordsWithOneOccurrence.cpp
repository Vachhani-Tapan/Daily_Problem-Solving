// Last updated: 6/23/2026, 10:26:30 AM
class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int> m1;
        unordered_map<string,int> m2;
        for(auto k : words1){
            m1[k]++;
        }
        for(auto k : words2){
            m2[k]++;
        }
        int count = 0;
        for(auto k : words1){
            if(m1[k] == 1 && m2[k] == 1){
                count++;
            }
        }
        return count;
    }
};