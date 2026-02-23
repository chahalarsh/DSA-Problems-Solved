class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;

        int m = matrix.size();
        int n = matrix[0].size();

        int i = 0, j = 0;

        int lC = 0, uC = 0, rC = n - 1, dC = m - 1; //Constraint eg:- uC == contrain from Up

        char direction = 'R'; // R = right, L = left, U = up, D = down.

        for(int k = 0; k < m * n; k++){

            res.push_back(matrix[i][j]);

            if( direction == 'R'){
                j++;

                if( j == rC + 1){
                    j = rC;
                    uC++;
                    i++;
                    direction = 'D';
                }
            }else if( direction == 'D'){
                i++;

                if( i == dC + 1){
                    direction = 'L';
                    i = dC;
                    rC--;
                    j--;
                }
            }else if(direction == 'L'){
                j--;

                if( j == lC - 1){
                    direction = 'U';
                    j = lC;
                    i--;
                    dC--;
                }
            }else if( direction == 'U'){
                i--;

                if( i == uC - 1){
                    direction = 'R';
                    i = uC;
                    j++;
                    lC++;
                }
            }
        }
        return res;
    }
};
