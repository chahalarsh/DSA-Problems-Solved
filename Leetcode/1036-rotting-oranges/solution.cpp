class Solution {
public:
    int m, n;

    vector<vector<int>> direction = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

    int orangesRotting(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();

        int time = 0;
        int freshCount = 0;

        queue<pair<int, int>> que;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 2) {
                    que.push({i, j});
                } else if (grid[i][j] == 1) {
                    freshCount++;
                }
            }
        }

        if (freshCount == 0) {
            return 0;
        }

        while (!que.empty()) {

            int s = que.size();

            while (s--) {

                pair<int, int> p = que.front();
                que.pop();

                int i = p.first;
                int j = p.second;

                for (auto dir : direction) {

                    int newI = i + dir[0];
                    int newJ = j + dir[1];

                    if (newI >= 0 && newI < m && newJ >= 0 && newJ < n && grid[newI][newJ] == 1) {
                        grid[newI][newJ] = 2;
                        que.push({newI, newJ});
                        freshCount--;
                    }
                }
            }

            time++; 
        }

        if(freshCount != 0){
            return -1;
        }

        return time - 1;
    }
};
