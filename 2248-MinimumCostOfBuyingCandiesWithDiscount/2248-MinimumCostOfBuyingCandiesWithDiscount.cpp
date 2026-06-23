// Last updated: 6/23/2026, 10:26:15 AM
class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int ans = 0;
        sort(cost.begin() , cost.end());
        for(int i = cost.size() - 1 ; i >= 0 ; i -= 3){
            ans += cost[i];
            // checking whether the second candy exists before adding its cost.
            if(i-1 >= 0){
                ans += cost[i-1];
            }
        }
        return ans;
    }
};