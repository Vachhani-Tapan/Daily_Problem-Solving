// Last updated: 6/26/2026, 10:02:50 PM
1class Solution {
2public:
3    bool isPathCrossing(string path) {
4        int i = 0;
5        int j = 0;
6        set<pair<int , int>> track = {{0,0}};
7        for(auto k : path){
8            if(k == 'N') j++;
9            else if(k == 'E') i++;
10            else if(k == 'W') i--;
11            else if(k == 'S') j--;
12
13            if(track.find({i , j}) != track.end()){
14                return true;
15            }
16            track.insert({i,j});
17        }
18        return false;
19    }
20};