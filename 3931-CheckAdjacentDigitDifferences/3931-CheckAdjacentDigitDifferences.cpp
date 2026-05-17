// Last updated: 5/17/2026, 9:50:33 AM
1class Solution {
2public:
3    bool isAdjacentDiffAtMostTwo(string s) {
4        for(int i = 0 ; i < s.size() - 1 ; i++){
5            if(abs(s[i] - s[i+1]) > 2){
6                return false;
7            }
8        }
9        return true;
10    }
11};