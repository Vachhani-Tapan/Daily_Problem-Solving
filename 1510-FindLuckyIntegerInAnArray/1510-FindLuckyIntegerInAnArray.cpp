// Last updated: 6/23/2026, 10:27:41 AM
class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> m1;
        for(auto k : arr){
            m1[k]++;
        }
        int ans = INT_MIN;
        for(auto k : m1){
            if(k.first == k.second){
                ans = max(ans , k.first);
            }
        }
        return ans != INT_MIN ? ans : -1;
    }
};