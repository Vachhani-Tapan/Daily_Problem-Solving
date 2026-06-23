// Last updated: 6/23/2026, 10:26:57 AM
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin() , costs.end());
        int count = 0;
        int sum = 0;
        for(auto k : costs){
            sum += k;
            if(sum <= coins){
                count++;
            }
            else{
                return count;
            }
        }
        return count;
    }
};