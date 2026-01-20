class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> row0;
        vector<int> col0;
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[0].size(); j++){
                if(matrix[i][j] == 0){
                    row0.push_back(i);
                    col0.push_back(j);
                }
            }
        }
        for(int row: row0){
            int tmp = 0;
            while(tmp < matrix[0].size()){
                matrix[row][tmp] = 0;
                tmp++;
            }
        }
        for(int col: col0){
            int tmp = 0;
            while(tmp < matrix.size()){
                matrix[tmp][col] = 0;
                tmp++;
            }
        }
    }
};
