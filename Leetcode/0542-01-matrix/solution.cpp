class Solution {
public:
    int m;
    int n;

    vector<vector<int>> directions = {{0,1},{0,-1},{1, 0},{-1, 0}};

    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        m = mat.size();
        n = mat[0].size();
        queue<pair<int,int>> que;

        vector<vector<int>> result(m, vector<int>(n, -1));

        for(int i = 0; i < mat.size(); i++){
            for(int j = 0; j < mat[0].size(); j++){
                if( mat[i][j] == 0){
                    result[i][j] = 0;
                    que.push({i,j});
                }
            }
        }

        while(!que.empty()){

            pair<int,int> p = que.front();
            que.pop();

            int i = p.first;
            int j = p.second;

            for(auto dir: directions){
                int newI = i + dir[0];
                int newJ = j + dir[1];

                if( newI >= 0 && newI < m && newJ >= 0 && newJ < n && result[newI][newJ] == -1){
                    result[newI][newJ] = result[i][j] + 1;
                    que.push({newI, newJ});
                }
            }

        }

        return result;
    }

};
