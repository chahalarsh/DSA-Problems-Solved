class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int s = nums.size();
        if(nums.size() == 1){
            return {0};
        }
        vector<int> lSum(s), rSum(s);

        int t = 0;
        for(int i = 0; i < s; i++){
            lSum[i] = t;
            t += nums[i];
        }
        t = 0;
        for(int i = s - 1; i >= 0; i--){
            rSum[i] = t;
            t += nums[i];
        }

        vector<int> res;
        for(int i = 0; i < s; i++){
            res.push_back(abs(lSum[i] - rSum[i]));
        }
        return res;
    }
};
