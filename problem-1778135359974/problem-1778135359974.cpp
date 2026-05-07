// Last updated: 5/7/2026, 11:59:19 AM
1class Solution {
2public:
3    int countSegments(string s) {
4        int count = 0;
5        for(int i = 0 ; i < s.size() ; i++){
6            string str = "";
7            while(i < s.size() && s[i] != ' ')
8            {
9                str += s[i];
10                i++;
11            }
12            if(str.size() > 0) count++;
13        }
14        return count;
15    }
16};