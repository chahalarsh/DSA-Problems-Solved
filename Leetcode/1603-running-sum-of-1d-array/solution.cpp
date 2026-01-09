class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> res;
        int tmp = 0;
        for(int i = 0; i < nums.size(); i++){
            res.push_back(nums[i] + tmp);
            tmp += nums[i];
        }        
        return res;
    }
};
