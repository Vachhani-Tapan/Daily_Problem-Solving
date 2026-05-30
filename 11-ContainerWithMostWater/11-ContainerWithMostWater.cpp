// Last updated: 5/30/2026, 3:52:19 PM
1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int l = 0;
5        int r = height.size() - 1;
6        int ans = 0;
7        while (l < r) {
8            int w = r - l;
9            int cap = min(height[l], height[r]);
10            ans = max(ans, w * cap);
11            (height[l] < height[r]) ? l++ : r--;
12        }
13        return ans;
14    }
15};