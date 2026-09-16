class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        unordered_map<int , unordered_set<int>> mpp;

        for(auto k : logs){
            mpp[k[0]].insert(k[1]);
        }

        vector<int> res(k , 0);

        for(auto k : mpp){
            res[k.second.size() - 1]++;
        }

        return res;
    }
};