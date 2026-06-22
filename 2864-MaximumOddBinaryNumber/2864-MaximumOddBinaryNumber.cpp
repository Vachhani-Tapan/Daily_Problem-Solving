// Last updated: 6/22/2026, 10:13:45 PM
1class Solution {
2public:
3    string maximumOddBinaryNumber(string s) {
4        int count1 = 0;
5        for(auto k : s){
6            if(k == '1'){
7                count1++;
8            }
9        }
10        string res = "";
11        for(int i = 0 ; i < count1 - 1 ; i++){
12            res += "1";
13        }
14        for(int i = 0 ; i < s.size() - count1 ; i++){
15            res += "0";
16        }
17        res += "1";
18        return res;
19    }
20};