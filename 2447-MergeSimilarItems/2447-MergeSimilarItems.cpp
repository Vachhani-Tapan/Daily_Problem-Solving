// Last updated: 6/23/2026, 10:25:48 AM
class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int,int> freq;
        for(auto i : items1) freq[i[0]] += i[1];
        for(auto i : items2) freq[i[0]] += i[1];
        vector<vector<int>> res;
        for(auto k : freq){
            res.push_back({k.first , k.second});
        }
        return res;
    }
};