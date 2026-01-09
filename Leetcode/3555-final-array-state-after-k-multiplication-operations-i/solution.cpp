class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for(int j = 0; j < k; j++){
            int min = nums[0];
            int minIdx = 0;

            for(int i = 0; i < nums.size(); i++){
                if(nums[i] < min){
                    min = nums[i];
                    minIdx = i;
                }
            }

            nums[minIdx] *= multiplier;

        }
        return nums;
    }
};
