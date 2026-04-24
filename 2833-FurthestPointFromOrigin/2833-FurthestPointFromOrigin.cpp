// Last updated: 4/24/2026, 8:26:07 AM
1class Solution {
2public:
3    int furthestDistanceFromOrigin(string moves) {
4        int left = 0;
5        int right = 0;
6        int blank = 0;
7        for(auto k : moves){
8            if(k == 'L') left++;
9            else if(k == 'R') right++;
10            else blank++;
11        }
12        return abs(right - left) + blank;
13    }
14};