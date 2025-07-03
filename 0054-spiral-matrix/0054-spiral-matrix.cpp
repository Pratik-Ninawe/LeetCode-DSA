class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int top=0;
        int right = m;
        int bottom = n;
        int left = 0;
        vector<int> output;
        while(left<right && top < bottom){
            for(int i=left; i<right; i++){
                output.push_back(matrix[top][i]);
            }
            top++;

            for(int i=top;i<bottom;i++){
                output.push_back(matrix[i][right-1]);
            }
            right--;

            if (!(left < right && top < bottom)) break;
            for(int i=right-1;i>=left;i--){
                output.push_back(matrix[bottom-1][i]);
            }
            bottom--;

            for(int i=bottom-1;i>=top;i--){
                output.push_back(matrix[i][left]);
            }
            left++;
        }
        return output;

    }
};