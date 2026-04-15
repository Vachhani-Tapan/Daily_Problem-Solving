// Last updated: 4/15/2026, 10:48:42 AM
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        set<char> s1(jewels.begin() , jewels.end());
        int count = 0;
        for(auto k : stones){
            if(s1.count(k)){
                count++;
            }
        }
        return count;
    }
};