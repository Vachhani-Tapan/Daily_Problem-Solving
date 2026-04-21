// Last updated: 4/21/2026, 7:01:04 PM
1class Solution {
2public:
3    bool areOccurrencesEqual(string s) {
4        unordered_map<char,int> m1;
5        for(auto k : s){
6            m1[k]++;
7        }
8        int freq = 0;
9        for(auto k : m1){
10            if(freq == 0){
11                freq = k.second;
12            }
13            else if(k.second != freq){
14                return false;
15            }
16        }
17        return true;
18    }
19};