class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int row=matrix.size();
        int col=matrix[0].size();

        for(int i=0;i<row;i++){
            for(int j=i+1;j<col;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        for(int i=0;i<row;i++){
            for(int j=0;j<col/2;j++){
                swap(matrix[i][j],matrix[i][col-j-1]);
            }
        }
    }
};