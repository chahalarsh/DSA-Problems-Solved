class Solution {
public:

    int m = 0;
    int n = 0;

    int numIslands(vector<vector<char>>& grid) {
        m = grid.size();
        n = grid[0].size();
        int Cnt = 0;

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if( grid[i][j] == '1'){
                    dfs(grid, i, j);
                    Cnt++;
                }
            }
        }

        return Cnt;
    }

    void dfs(vector<vector<char>>& grid, int i, int j){
        if( i < 0 || i >= m || j < 0 || j >= n){
            return;
        }
        if( grid[i][j] == '0' || grid[i][j] == '2'){
            return;
        }
        grid[i][j] = '2';

        dfs(grid, i + 1, j);
        dfs(grid, i, j + 1);
        dfs(grid, i - 1, j);
        dfs(grid, i, j - 1); 
        
    }
};
