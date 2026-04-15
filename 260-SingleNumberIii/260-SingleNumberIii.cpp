// Last updated: 4/15/2026, 10:49:20 AM
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> v1;
        map<int , int> m1;
        for(auto k : nums){
            m1[k]++;
        }
        for(auto k : m1){
            if(k.second == 1){
                v1.push_back(k.first);
            }
        }
        return v1;
    }
};