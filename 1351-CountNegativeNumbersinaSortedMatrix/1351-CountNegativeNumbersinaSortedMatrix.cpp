// Last updated: 6/5/2026, 5:49:04 PM
1class Solution {
2public:
3    int countNegatives(vector<vector<int>>& grid) {
4        int count = 0;
5        for (int i = 0; i < grid.size(); i++) {
6            int l = 0;
7            int r = grid[i].size() - 1;
8            while (l <= r) {
9                int mid = (l + r) / 2;
10                if (grid[i][mid] < 0) {
11                    r = mid - 1;
12                } else {
13                    l = mid + 1;
14                }
15            }
16            count += grid[i].size() - l;
17        }
18        return count;
19    }
20};