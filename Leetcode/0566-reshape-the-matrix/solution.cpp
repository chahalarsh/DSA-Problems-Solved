class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int matR = mat.size();
        int matC = mat[0].size();

        if(matR * matC != r * c){
            return mat;
        }

        int matI = 0;
        int matJ = 0;

        vector<vector<int>> res(r);

        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){

                int tmp = mat[matI][matJ];  

                res[i].push_back(tmp);


                if(matJ == matC - 1){
                    matJ = 0;
                    matI++;
                }else{
                    matJ++;
                }
            }
        }
        return res;
    }
};
