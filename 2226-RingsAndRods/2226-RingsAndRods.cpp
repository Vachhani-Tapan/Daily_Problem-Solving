// Last updated: 6/23/2026, 10:26:24 AM
class Solution {
public:
    int countPoints(string rings) {
        unordered_map<int , set<char>> m1;
        for(int i = 0 ; i < rings.size() ; i += 2){
            int rod = rings[i+1] - '0';
            char bar = rings[i];
            m1[rod].insert(bar);
        }
        int count = 0;
        for(auto k : m1){
            if(k.second.size() == 3){
                count++;
            }
        }
        return count;
    }
};