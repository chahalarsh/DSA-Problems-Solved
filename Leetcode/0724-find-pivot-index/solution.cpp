class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int rSum = 0;
        int lSum = 0;

        for(int num: nums){
            rSum += num;
        }
        rSum -= nums[0];
        for(int i = 0; i < nums.size(); i++){
            if( lSum == rSum){
                return i;
            }else{
                lSum += nums[i];
                if( i == nums.size() - 1){
                    rSum = 0;
                }else{
                    rSum -= nums[i + 1];
                }

            }
        }

        return -1;
    }
};
