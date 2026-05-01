// Last updated: 5/1/2026, 10:15:08 AM
1class Solution {
2public:
3    int countWords(vector<string>& words1, vector<string>& words2) {
4        unordered_map<string,int> m1;
5        unordered_map<string,int> m2;
6        for(auto k : words1){
7            m1[k]++;
8        }
9        for(auto k : words2){
10            m2[k]++;
11        }
12        int count = 0;
13        for(auto k : words1){
14            if(m1[k] == 1 && m2[k] == 1){
15                count++;
16            }
17        }
18        return count;
19    }
20};