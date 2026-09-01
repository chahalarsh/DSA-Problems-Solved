class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int m = boxGrid.size();
        int n = boxGrid[0].size();

        for(int i = 0; i < m; i++){
            int t = 0;
            for(int j = 0; j < n; j++){
                if(boxGrid[i][j] == '.'){
                    swap(boxGrid[i][j], boxGrid[i][t]);
                    t++;
                }else if(boxGrid[i][j] == '*'){
                    t = j + 1;
                }
            }
        }

        vector<vector<char>> res(n, vector<char>(m));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                res[j][m - 1 - i] = boxGrid[i][j];
            }
        }

        return res;
    }
};
