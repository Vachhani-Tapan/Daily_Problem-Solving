// Last updated: 5/19/2026, 7:05:02 PM
1class Solution {
2public:
3    int partitionString(string s) {
4        unordered_map<char,int> m1;
5        int count = 1;
6        for(auto k : s){
7            if(m1[k] == 0){
8                m1[k]++;
9            }
10            else{
11                count++;
12                m1.clear();
13                m1[k]++;
14            }
15        }
16        return count;
17    }
18};