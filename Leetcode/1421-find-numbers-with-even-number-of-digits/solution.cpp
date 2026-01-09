class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int res = 0;
        for(int i = 0; i < nums.size(); i++){
            int digitCount = 0;
            while(nums[i] != 0){
                nums[i] /= 10;
                digitCount++;
            }
            if(digitCount % 2 == 0){
                res++;
            }            
        }
        return res;
    }
};
