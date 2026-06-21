// Last updated: 6/21/2026, 10:32:15 AM
1class Solution {
2public:
3    int maxIceCream(vector<int>& costs, int coins) {
4        sort(costs.begin() , costs.end());
5        int count = 0;
6        int sum = 0;
7        for(auto k : costs){
8            sum += k;
9            if(sum <= coins){
10                count++;
11            }
12            else{
13                return count;
14            }
15        }
16        return count;
17    }
18};