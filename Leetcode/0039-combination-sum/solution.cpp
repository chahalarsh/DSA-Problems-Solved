class Solution {
public:
    vector<vector<int>> res;
    vector<int> current;

    void backtrack(int start, int target, vector<int>& candidates){
        if(target == 0){
            res.push_back(current);
            return;
        }
        if(target < 0){
            return;
        }
        for(int i = start; i < candidates.size(); i++){
            current.push_back(candidates[i]);
            backtrack(i, target - candidates[i], candidates);
            current.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        backtrack(0,target,candidates);
        return res;
    }
};
