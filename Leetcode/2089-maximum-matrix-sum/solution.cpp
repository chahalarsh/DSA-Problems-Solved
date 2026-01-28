class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {

        long long sum = 0;
        int minNum = INT_MAX;
        int negCount = 0;

        int n = matrix.size();

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] < 0){
                    negCount++;
                }
                int tmp = abs(matrix[i][j]);               
                sum += tmp;
                if(tmp < minNum){
                    minNum = tmp;
                }
            }
        }
        if(negCount % 2 == 1){
            sum -= minNum * 2;
        }
        return sum;
    }
};
