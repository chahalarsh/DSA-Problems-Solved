class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        if(arr.size() <= 2){
            return {arr};
        }
        int minDiff = INT_MAX;
        for(int i = 1; i < arr.size(); i++){
            if(arr[i] - arr[i-1] <minDiff ){
                minDiff = arr[i] - arr[i-1];
            }
        }
        vector<vector<int>> res;
        for(int i = 1; i < arr.size(); i++){

            if(arr[i] - arr[i-1] == minDiff){
                res.push_back({min(arr[i],arr[i-1]),max(arr[i],arr[i-1])});
            }
            
        }
        return res;
    }
};
