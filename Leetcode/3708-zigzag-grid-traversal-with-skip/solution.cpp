class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        vector<int> res;
        bool skip = false;
        bool revrow = false;
        int j = 0;

        for(int i = 0; i < grid.size(); i++){
            while( j < grid[i].size() && j >= 0){
                if(!skip){
                    res.push_back(grid[i][j]); 
                }
                skip = !skip;


                if(revrow){
                    j--;
                }else{
                    j++;
                }
            }
            
            revrow = !revrow;

            if(revrow){
                j = grid[i].size() - 1;
            }else{
                j = 0;
            }

        }
        return res;
    }
};
