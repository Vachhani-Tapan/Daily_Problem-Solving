// Last updated: 4/27/2026, 9:21:26 AM
1class Solution {
2public:
3    bool validDigit(int n, int x) {
4        bool isVal = false;
5        while(n >= 10){
6            int dig = n % 10;
7            if(dig == x){
8                isVal = true;
9            }
10            n /= 10;
11        }
12        if(n != x && isVal){
13            return true;
14        }
15        return false;
16    }
17};