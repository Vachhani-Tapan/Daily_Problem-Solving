// Last updated: 6/23/2026, 10:27:14 AM
class Solution {
public:
    int minPartitions(string n) {
        int ans = 0;
        for(auto k : n){
            ans = max(ans , k - '0');
            if(ans == 9) break;
        }
        return ans;
    }
};