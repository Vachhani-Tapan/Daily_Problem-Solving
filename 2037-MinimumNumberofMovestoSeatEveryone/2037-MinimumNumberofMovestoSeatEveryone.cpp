// Last updated: 4/26/2026, 10:13:50 AM
1class Solution {
2public:
3    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
4        int ans = 0;
5        sort(seats.begin(), seats.end());
6        sort(students.begin(), students.end());
7        for (int i = 0; i < students.size(); i++) {
8            ans += abs(students[i] - seats[i]);
9        }
10        return ans;
11    }
12};