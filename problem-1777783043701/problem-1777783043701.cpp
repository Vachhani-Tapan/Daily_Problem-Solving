// Last updated: 5/3/2026, 10:07:23 AM
1class Solution {
2public:
3    int reverseNum(int n){
4        int rev = 0;
5        while(n){
6            rev = rev * 10 + (n % 10);
7            n /= 10;
8        }
9        return rev;
10    }
11
12    bool sumOfNumberAndReverse(int num) {
13        for(int i = num/2 ; i <= num ; i++){
14            if(i + reverseNum(i) == num){
15                return true;
16            }
17        }
18        return false;
19    }
20};