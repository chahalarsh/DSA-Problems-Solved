class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {
        
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                int b_count = 0;
                int w_count = 0;
                
                if (grid[i][j] == 'B') b_count++; else w_count++;
                if (grid[i+1][j] == 'B') b_count++; else w_count++;
                if (grid[i][j+1] == 'B') b_count++; else w_count++;
                if (grid[i+1][j+1] == 'B') b_count++; else w_count++;

                if (b_count >= 3 || w_count >= 3) {
                    return true;
                }
            }
        }
        return false;

    }
    
};
