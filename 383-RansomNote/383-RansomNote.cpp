// Last updated: 4/29/2026, 10:13:01 AM
1class Solution {
2public:
3    bool canConstruct(string ransomNote, string magazine) {
4        unordered_map<char,int> m1;
5        for(auto k : magazine){
6            m1[k]++;
7        }
8        for(auto k : ransomNote){
9            if(!m1[k]){
10                return false;
11            }
12            m1[k]--;
13        }
14        return true;
15    }
16};