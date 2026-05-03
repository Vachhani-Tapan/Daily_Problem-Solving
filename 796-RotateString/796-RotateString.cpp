// Last updated: 5/3/2026, 8:04:23 AM
1class Solution {
2public:
3    bool rotateString(string s, string goal) {
4        if(s.size() != goal.size()) return false;
5        return (s+s).find(goal) != -1;
6    }
7};