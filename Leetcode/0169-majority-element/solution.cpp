class Solution {
public:
    int majorityElement(vector<int>& nums) {

        if(nums.size() == 0){
            return 0;
        }

        int count = 1, ele = nums[0];

        for(int i = 0; i < nums.size(); i++){
            if(ele == nums[i]){
                count++;
            }else{
                count--;
            }
            if(count <= 0){
                ele = nums[i];
                count = 1;
            }
        }
        return ele;
    }
};
