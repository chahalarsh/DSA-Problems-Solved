class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& nums) {
        int n = nums.size();
        unordered_map<int,int> freq;

        int a = -1, b = -1;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                freq[nums[i][j]]++;
            }
        }

        for(int i = 1; i <= n*n; i++){
            if(freq[i] == 2) a = i;
            if(freq[i] == 0) b = i;
        }

        return {a, b};
        
    }
};
