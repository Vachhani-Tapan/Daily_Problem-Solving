// Last updated: 4/15/2026, 10:44:16 AM
class Solution {
public:
    int minCost(int n) {
        long long cost = 0;
        while(n > 1){
            cost += n - 1;
            n--;
        }
        return cost;
    }
};