// Last updated: 6/14/2026, 12:12:48 PM
1class Solution {
2public:
3    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
4        map<int,int> freq;
5        for(auto i : items1) freq[i[0]] += i[1];
6        for(auto i : items2) freq[i[0]] += i[1];
7        vector<vector<int>> res;
8        for(auto k : freq){
9            res.push_back({k.first , k.second});
10        }
11        return res;
12    }
13};