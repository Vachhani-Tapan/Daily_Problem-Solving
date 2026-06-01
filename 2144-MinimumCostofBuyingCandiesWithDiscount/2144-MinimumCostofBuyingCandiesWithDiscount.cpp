// Last updated: 6/1/2026, 9:35:15 AM
1class Solution {
2public:
3    int minimumCost(vector<int>& cost) {
4        int ans = 0;
5        sort(cost.begin() , cost.end());
6        for(int i = cost.size() - 1 ; i >= 0 ; i -= 3){
7            ans += cost[i];
8            // checking whether the second candy exists before adding its cost.
9            if(i-1 >= 0){
10                ans += cost[i-1];
11            }
12        }
13        return ans;
14    }
15};