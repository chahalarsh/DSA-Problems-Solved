class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {

        int n = grid.size();
        int t1 = 0;
        int t2 = n - 1;
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if( grid[i][j] != 0){
                    if( j == t1 || j == t2){
                        continue;
                    }else{
                        return false;
                    }
                }else{
                    if( j == t1 || j == t2){
                        return false;
                    }
                }
            }
            t1++;
            t2--;
        }
        return true;
    }
};
