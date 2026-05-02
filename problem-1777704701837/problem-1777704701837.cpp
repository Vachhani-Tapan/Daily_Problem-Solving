// Last updated: 5/2/2026, 12:21:41 PM
1class Solution {
2public:
3    bool checkTwoChessboards(string c1, string c2) {
4        return (c1[0] + c1[1]) % 2 == (c2[0] + c2[1]) % 2;
5    }
6};