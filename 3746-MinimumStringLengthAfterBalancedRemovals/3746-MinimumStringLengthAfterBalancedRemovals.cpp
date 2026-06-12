// Last updated: 6/12/2026, 5:12:34 PM
1class Solution {
2public:
3    int minLengthAfterRemovals(string s) {
4        int a = 0;
5        for(int i = 0 ; i < s.size() ; i++){
6            if(s[i] == 'a'){
7                a++;
8            }
9            else{
10                a--;
11            }
12        }
13        return abs(a);
14    }
15};