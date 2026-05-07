// Last updated: 5/7/2026, 11:21:19 AM
1class Solution {
2public:
3    int maxPower(string s) {
4        int Maxcount = 1;
5        int Currcount = 1;
6        for(int i = 0 ; i < s.size() - 1 ; i++){
7            if(s[i] == s[i+1]){
8                Currcount++;
9            }
10            else{
11                Currcount = 1;
12            }
13            Maxcount = max(Maxcount , Currcount);
14        }
15        return Maxcount;
16    }
17};