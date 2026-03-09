class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>>a(n,vector<int>(n,0));
        for(auto it:queries){
            int x=it[0];
            int y=it[1];
            int i=it[2];
            int j=it[3];

            for(int k=x;k<=i;k++){
                a[k][y]+=1;
            }
            if(j+1<n){
                   for(int k=x;k<=i;k++){
                       a[k][j+1]-=1;
                  }
            }
        }
        for(int j=1;j<n;j++){
            for(int i=0;i<n;i++){
                a[i][j]+=a[i][j-1];
            }
        }
        return a;
    }
};
