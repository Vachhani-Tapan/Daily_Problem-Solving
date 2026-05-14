// Last updated: 5/14/2026, 8:00:56 PM
1class Solution {
2public:
3    int firstUniqueFreq(vector<int>& nums) {
4        unordered_map<int,int> m,m1;
5        for(auto k : nums){
6            m[k]++;
7        }
8        for(auto k : m){
9            m1[k.second]++;
10        }
11        for(int i = 0 ; i < nums.size() ; i++){
12            if(m1[m[nums[i]]] == 1){
13                return nums[i];
14            }
15        }
16        return -1;
17    }
18};