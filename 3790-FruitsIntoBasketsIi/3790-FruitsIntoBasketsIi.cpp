// Last updated: 6/23/2026, 10:24:08 AM
class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int count = 0;
        for(auto k : fruits){
            bool isplaced = false;
            for(int i = 0 ; i < baskets.size() ; i++){
                if(baskets[i] >= k){
                    isplaced = true;
                    baskets.erase(baskets.begin() + i);
                    break;
                }
            }
            if(!isplaced) count++;
        }
        return count;
    }
};