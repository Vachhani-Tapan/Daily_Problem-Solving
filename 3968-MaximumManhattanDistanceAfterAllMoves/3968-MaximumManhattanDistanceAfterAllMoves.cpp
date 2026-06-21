// Last updated: 6/21/2026, 10:03:23 AM
1class Solution {
2public:
3    int maxDistance(string moves) {
4        int x = 0;
5        int y = 0;
6        int count = 0;
7        for(auto k : moves){
8            if(k == 'L') x--;
9            else if(k == 'R') x++;
10            else if(k == 'U') y++;
11            else if(k == 'D') y--;
12            else count++;
13        }
14        return abs(x) + abs(y) + count;
15    }
16};