// Last updated: 5/6/2026, 4:25:55 PM
1class Solution {
2public:
3    bool divideArray(vector<int>& nums) {
4        unordered_map<int,int> m1;
5        for(auto k : nums){
6            m1[k]++;
7        }
8        for(auto k : m1){
9            if(k.second % 2 != 0){
10                return false;
11            }
12        }
13        return true;
14    }
15};