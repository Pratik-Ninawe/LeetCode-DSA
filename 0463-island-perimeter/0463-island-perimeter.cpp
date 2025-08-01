class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        
        int cnt=0, shared=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1){
                    cnt++;

                    if(i + 1 < grid.size() && grid[i + 1][j] == 1) shared++;
                    if(j + 1 < grid[i].size() && grid[i][j + 1] == 1) shared++;
                }
            }
        }
        return cnt*4 - shared*2;
    }
};