// Last updated: 5/23/2026, 3:33:55 PM
1class Solution {
2public:
3    int minPartitions(string n) {
4        int ans = 0;
5        for(auto k : n){
6            ans = max(ans , k - '0');
7            if(ans == 9) break;
8        }
9        return ans;
10    }
11};