// Last updated: 5/27/2026, 4:08:19 PM
1class Solution {
2public:
3    int countAsterisks(string s) {
4        bool bar = false;
5        int count = 0;
6        for(auto k : s){
7            if(k == '*' && !bar){
8                count++;
9            }
10            else if(k == '|'){
11                bar = !bar;
12            }
13        }
14        return count;
15    }
16};