class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        
        vector<int> row;
        for(int i = 0; i < grid.size(); i++){
            int t = 0;
            for(int j = 0; j < grid[0].size(); j++){
                if( grid[i][j] == 1){
                    t++;
                }
            }
            row.push_back(t);
        }

        vector<int> col;
        for(int i = 0; i < grid[0].size(); i++){
            int t = 0;
            for(int j = 0; j < grid.size(); j++){
                if( grid[j][i] == 1){
                    t++;
                }
            }
            col.push_back(t);
        }

        vector<vector<int>> diff = grid;
        for(int i = 0; i < diff.size(); i++){
            for(int j = 0; j < diff[0].size(); j++){
                diff[i][j] = col[j] + row[i] - (grid.size() - col[j]) - (grid[0].size() - row[i]); 
            }
        }
        return diff;   
    }
};
