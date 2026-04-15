// Last updated: 4/15/2026, 10:48:59 AM
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int> m1;
        vector<int> v1;
        for(auto k : nums) m1[k]++;
        for(auto k : m1) if(k.second == 2) v1.push_back(k.first);
        return v1;
    }
};