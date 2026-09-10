class Solution {
public:

    int m, n;
    int maxArea = 0;

    vector<vector<int>> direction = {{1,0},{-1,0},{0,1},{0,-1}};

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        m = grid.size();
        n = grid[0].size();

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if( grid[i][j] == 1){
                    maxArea = max(maxArea, dfs(grid, i, j));
                }
            }
        }

        return maxArea;
    }

    int dfs(vector<vector<int>>& grid, int i, int j){

        int currArea = 1;
        grid[i][j] = 2;

        for(auto dir: direction){

            int newI = i + dir[0];
            int newJ = j + dir[1];

            if( newI >= 0 && newI < m && newJ >= 0 && newJ < n && grid[newI][newJ] == 1){
                currArea += dfs(grid, newI,newJ);
            }
        }

        return currArea;
    }
};
