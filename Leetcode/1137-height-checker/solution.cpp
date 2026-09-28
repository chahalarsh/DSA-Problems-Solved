class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
        int res = 0;
        vector<int> correctOrder = heights;
        sort(correctOrder.begin(),correctOrder.end());

        for(int i = 0; i < n; i++){
            if( correctOrder[i] != heights[i]){
                res++;
            }
        }
        return res;
    }
};
