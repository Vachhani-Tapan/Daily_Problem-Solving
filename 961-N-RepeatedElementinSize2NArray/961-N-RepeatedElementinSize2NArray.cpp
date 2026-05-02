// Last updated: 5/2/2026, 9:58:55 AM
1class Solution {
2public:
3    int repeatedNTimes(vector<int>& nums) {
4        int siz = nums.size() / 2;
5        unordered_map<int,int> m1;
6        for(auto k : nums){
7            m1[k]++;
8        }
9        for(auto k : m1){
10            if(k.second == siz){
11                return k.first;
12            }
13        }
14        return 0;
15    }
16};