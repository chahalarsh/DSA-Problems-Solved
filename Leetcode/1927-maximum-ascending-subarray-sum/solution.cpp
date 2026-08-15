class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {

        int res = nums[0];
        int t = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i - 1] < nums[i]) {
                t += nums[i];
            } else {
                t = nums[i];
            }
            res = max(res, t);
        }

        return res;
    }
};
