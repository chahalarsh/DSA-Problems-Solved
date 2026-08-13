class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        unordered_map <int,int> gapFrequency;
        int maxGaps = 0;

        for(int i = 0; i < wall.size(); i++){
            long long t = 0;
            for(int j = 0; j < wall[i].size() - 1; j++){
                t += wall[i][j];
                gapFrequency[t]++; 

                maxGaps = max(gapFrequency[t], maxGaps);
            }
        }

        return wall.size() - maxGaps;
    }
};
