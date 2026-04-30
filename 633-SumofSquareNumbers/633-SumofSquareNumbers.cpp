// Last updated: 4/30/2026, 7:35:26 PM
1class Solution {
2public:
3    bool judgeSquareSum(int c) {
4        long long left = 0;
5        long long right = sqrt(c);
6        while(left <= right){
7            long long sum = (left * left) + (right * right);
8            if(sum == c){
9                return true;
10            }
11            else if(sum < c){
12                left++;
13            }
14            else{
15                right--;
16            }
17        }
18        return false;
19    }
20};