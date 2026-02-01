class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int c1 = nums[0];
        int c2 = INT_MAX;
        int c3 = INT_MAX;

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] < c2){
                c3 = c2;
                c2 = nums[i];
            }else if(nums[i] < c3){
                c3 = nums[i];
            }
        }
        return c1 + c2 + c3; 
    }
};
