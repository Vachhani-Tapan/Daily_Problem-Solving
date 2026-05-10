// Last updated: 5/10/2026, 10:28:15 AM
1class Solution {
2public:
3    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
4        sort(asteroids.begin() , asteroids.end());
5        long long ans = mass;
6        for(auto k : asteroids){
7            if(ans < k){
8                return false;
9            }
10            ans += k;
11        }
12        return true;
13    }
14};