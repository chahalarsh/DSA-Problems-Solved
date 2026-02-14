class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sumR = 0;
        int sumL = 0;
        for(int i = 0; i < nums.size(); i++){
            sumR += nums[i];
        }

        for(int i = 0; i < nums.size(); i++){

            sumR -= nums[i];
            
            if(sumL == sumR){
                return i;
            }
            
            sumL += nums[i];
        }
        return -1;
    }
};
