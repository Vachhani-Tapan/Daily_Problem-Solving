// Last updated: 4/20/2026, 7:51:40 AM
1class Solution {
2public:
3    int maxDistance(vector<int>& colors) {
4        int dist = INT_MIN;
5        for (int i = 0; i < colors.size(); i++) {
6            for (int j = i + 1; j < colors.size(); j++) {
7                if (colors[i] != colors[j]) {
8                    dist = max(dist, abs(j - i));
9                }
10            }
11        }
12        return dist;
13    }
14};