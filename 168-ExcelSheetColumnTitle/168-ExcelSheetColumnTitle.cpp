// Last updated: 6/5/2026, 1:20:44 PM
1class Solution {
2public:
3    string convertToTitle(int columnNumber) {
4        string res = "";
5        while(columnNumber){
6            columnNumber--;
7            res = (char)(columnNumber % 26 + 'A') + res;
8            columnNumber /= 26;
9        }
10        return res;
11    }
12};