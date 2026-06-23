// Last updated: 6/23/2026, 10:26:16 AM
class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin() , asteroids.end());
        long long ans = mass;
        for(auto k : asteroids){
            if(ans < k){
                return false;
            }
            ans += k;
        }
        return true;
    }
};