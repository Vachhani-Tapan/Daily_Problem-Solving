// Last updated: 6/5/2026, 1:33:04 PM
1class Solution {
2public:
3    bool isHappy(int n) {
4        if(n == 1 || n == 7){
5            return true;
6        }
7        else if(n < 10){
8            return false;
9        }
10        else{
11            int sum = 0;
12            while(n){
13                int dig = n % 10;
14                sum += dig * dig;
15                n /= 10;
16            }
17            return isHappy(sum);
18        }
19    }
20};