// Last updated: 4/23/2026, 6:40:45 PM
1class Solution {
2public:
3    vector<int> findArray(vector<int>& pref) {
4        vector<int> res(pref.size());
5        res[0] = pref[0];
6        for(int i = 1 ; i < pref.size() ; i++){
7            res[i] = pref[i] ^ pref[i-1];
8        }
9        return res;
10    }
11};