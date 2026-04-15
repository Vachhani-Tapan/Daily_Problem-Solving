// Last updated: 4/15/2026, 10:44:19 AM
class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        set<int> s1(friends.begin() , friends.end());
        vector<int> v1;
        for(auto k : order){
            if(s1.count(k))  v1.push_back(k);
        }
        return v1;
    }
};