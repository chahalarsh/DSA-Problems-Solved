class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int n; 

        if(nums[0] > target){
            return 0;
        }

        for(int i = 0; i < nums.size(); i++){

            if(nums[i] < target){
                if(i + 1 < nums.size()){
                    if(nums[i + 1] > target){
                        return i + 1;
                    }
                }
                else{
                    return i + 1;
                }
            }

            if(nums[i] == target){
                n = i;
                break;
            }
        }
        return n;
    }
};
