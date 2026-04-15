// Last updated: 4/15/2026, 6:17:41 PM
1class Solution {
2public:
3    int percentageLetter(string s, char letter) {
4        int count = 0;
5        for(int i = 0 ; i < s.size() ; i++){
6            if(s[i] == letter){
7                count++;
8            }
9        }
10        return count * 100 / s.size();
11    }
12};