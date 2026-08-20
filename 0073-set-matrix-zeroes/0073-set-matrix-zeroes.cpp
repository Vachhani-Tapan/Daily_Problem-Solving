class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        // without using any extra space and in o(m*n) time
        
        bool firstRow = false;
        bool firstCol = false;

        int row = matrix.size();
        int col = matrix[0].size();

        // set markers in first row and first column
        for(int i = 0 ; i < row ; i++){
            for(int j = 0 ; j < col ; j++){
                if(matrix[i][j] == 0){
                    if(i == 0) firstRow = true;
                    if(j == 0) firstCol = true;
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // replace inner matrix help of the markers
        for(int i = 1 ; i < row ; i++){
            for(int j = 1 ; j < col ; j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }

        // last replace the firstrow and the firstcolumn
        if(firstRow){
            for(int j = 0 ; j < col ; j++){
                matrix[0][j] = 0;
            }
        }
        if(firstCol){
            for(int i = 0 ; i < row ; i++){
                matrix[i][0] = 0;
            }
        }


        
        
        // using two extra space in the form of the sets

        // unordered_set<int> rows;
        // unordered_set<int> cols;
        // int row = matrix.size();
        // int col = matrix[0].size();

        // for(int i = 0 ; i < row ; i++){
        //     for(int j = 0 ; j < col ; j++){
        //         if(matrix[i][j] == 0){
        //             rows.insert(i);
        //             cols.insert(j);
        //         }
        //     }
        // }

        // for(int i = 0 ; i < row ; i++){
        //     for(int j = 0 ; j < col ; j++){
        //         if(rows.find(i) != rows.end() || cols.find(j) != cols.end()){
        //             matrix[i][j] = 0;
        //         }
        //     }
        // }
    }
};