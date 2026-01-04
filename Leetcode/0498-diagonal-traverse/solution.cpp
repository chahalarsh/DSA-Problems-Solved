class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        if (mat.empty() || mat[0].empty()) return {};
        
        int m = mat.size();
        int n = mat[0].size();
        vector<int> result;
        result.reserve(m * n);
        
        int row = 0;
        int col = 0;
        bool goingup = true;
        
        while (result.size() < m * n) {
            result.push_back(mat[row][col]);
            
            if(goingup){
                if(col == n - 1){
                    row++;
                    goingup = false;
                }else if(row == 0){
                    col++;
                    goingup = false;
                }else{
                    row--;
                    col++;
                }
            }else{
                if(row == m - 1){
                    col++;
                    goingup = true;
                }else if(col == 0){
                    row++;
                    goingup = true;
                }else {
                    row++;
                    col--;
                }
            }
        }
        
        return result;
    }
};

