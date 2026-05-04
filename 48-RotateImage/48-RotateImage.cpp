// Last updated: 5/4/2026, 7:55:10 AM
1class Solution {
2public:
3    void rotate(vector<vector<int>>& matrix) {
4        // Transpose the matrix row -> column && col -> row
5        for(int i = 0 ; i < matrix.size() ; i++){
6            for(int j = i ; j < matrix.size() ; j++){
7                swap(matrix[i][j] , matrix[j][i]);
8            }
9        }
10        // reverse the rows element
11        for(int i = 0 ; i < matrix.size() ; i++){
12            reverse(matrix[i].begin() , matrix[i].end());
13        }
14    }
15};