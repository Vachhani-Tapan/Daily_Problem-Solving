// Last updated: 6/23/2026, 10:24:21 AM
class Solution {
public:
    bool checkTwoChessboards(string c1, string c2) {
        return (c1[0] + c1[1]) % 2 == (c2[0] + c2[1]) % 2;
    }
};