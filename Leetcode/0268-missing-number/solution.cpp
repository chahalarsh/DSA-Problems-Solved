class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int tmp1 = 0;
        int tmp2 = 0;
        for(int i = 0; i < nums.size(); i++){
            tmp1 = tmp1 ^ nums[i];
        }
        for(int i = 0; i <= nums.size(); i++){
            tmp2 = tmp2 ^ i;
        }

        return tmp1 ^ tmp2;
    }
};
