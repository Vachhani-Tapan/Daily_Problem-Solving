// Last updated: 6/23/2026, 10:25:43 AM
class Solution {
public:
    int partitionString(string s) {
        unordered_map<char,int> m1;
        int count = 1;
        for(auto k : s){
            if(m1[k] == 0){
                m1[k]++;
            }
            else{
                count++;
                m1.clear();
                m1[k]++;
            }
        }
        return count;
    }
};