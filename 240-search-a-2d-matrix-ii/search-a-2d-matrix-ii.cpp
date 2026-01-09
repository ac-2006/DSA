class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // BRute FORCE - O(N*m)


        // for(int i = 0;i<matrix.size();i++){
        //     for(int j = 0;j< matrix[0].size();j++){
        //         if(matrix[i][j] == target) return true;
        //     }
        // }
        // return false;

        //optimised

        int col = matrix[0].size() - 1,row = 0;
        while(row < matrix.size() && col >= 0){
            if(matrix[row][col] == target) return true;
            else if(matrix[row][col] > target) col--;
            else row++;
        }

        return false;
    }
};