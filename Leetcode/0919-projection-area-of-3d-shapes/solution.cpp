class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {

        int n = grid.size();
        int res = 0;

   

        for(int i = 0; i < n; i++ ){

            int maxRowEle = 0;
            int maxColEle = 0;

            for(int j = 0; j < n; j++){
                if( grid[i][j] != 0){
                    res++;
                }
                maxRowEle = max(maxRowEle, grid[i][j]);
                maxColEle = max(maxColEle, grid[j][i]);
            }
            res += maxRowEle;
            res += maxColEle;

        }

        return res;        
    }
};
