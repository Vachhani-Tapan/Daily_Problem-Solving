// Last updated: 5/2/2026, 9:50:34 AM
1class Solution {
2public:
3    int findLucky(vector<int>& arr) {
4        unordered_map<int,int> m1;
5        for(auto k : arr){
6            m1[k]++;
7        }
8        int ans = INT_MIN;
9        for(auto k : m1){
10            if(k.first == k.second){
11                ans = max(ans , k.first);
12            }
13        }
14        return ans != INT_MIN ? ans : -1;
15    }
16};