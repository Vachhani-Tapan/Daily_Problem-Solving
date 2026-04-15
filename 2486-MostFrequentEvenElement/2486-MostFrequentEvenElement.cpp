// Last updated: 4/15/2026, 10:46:19 AM
class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int maxFreq = INT_MIN;
        unordered_map<int,int> m1;
        // storing all odd numbers freq in map
        for(auto k : nums){
            if(k % 2 == 0){
                m1[k]++;
                maxFreq = max(maxFreq , m1[k]);
            }
        }
        if(m1.empty()) return -1;   // all are odd numbers;

        int ans = INT_MAX;
        for(auto k : m1){
            if(k.second == maxFreq){
                ans = min(ans , k.first);
            }
        }
        return ans;
    }
};