class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int res = 0;
        for(int i = 0; i < mat.size(); i++){
            for(int j = 0; j < mat[i].size(); j++){
                if(mat[i][j] == 1){
                    bool cleanRow = true;
                    bool cleanCol = true;
                    for(int m = 0; m < mat[i].size() ; m++){
                        if(mat[i][m] == 1 && m != j){
                            cleanRow = false;
                            break;
                        } 
                    }
                    if(cleanRow){
                        for(int m = 0; m < mat.size(); m++){
                            if(mat[m][j] == 1  && m != i){
                                cleanCol = false;
                                break;
                            } 
                        }
                    }
                    if(cleanRow && cleanCol){
                        res++;
                    }
                }
            }
        }
        return res;
    }
};
