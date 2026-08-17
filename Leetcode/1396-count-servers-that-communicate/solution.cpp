class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        
        int res = 0;

        vector<int> row(grid.size());
        vector<int> col(grid[0].size());

        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if( grid[i][j] == 1){
                    row[i]++;
                    col[j]++;
                }
            }
        }
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if( grid[i][j] == 1 && ( row[i] > 1 || col[j] > 1)){
                    res++;
                }
            }
        }
        return res;
    }
};
