// Last updated: 4/15/2026, 10:45:03 AM
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int> m1;
        for(auto k : nums){
            m1[k]++;
        }
        int maxfreq = 0;
        for(auto k : m1){
            if(k.second > maxfreq) maxfreq = k.second;
        }
        int ans = 0;
        for(auto k : m1){
            if(k.second == maxfreq) ans += k.second;
        }
        return ans;
    }
};