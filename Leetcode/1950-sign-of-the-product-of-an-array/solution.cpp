class Solution {
public:
    int arraySign(vector<int>& nums) {
        int res = 1;
        for(int i = 0; i < nums.size(); i++){
            res *= signFunc(nums[i]);
            if(res == 0){
                return 0;
            }
        }
        return res;
    }
    int signFunc(int x){
        if(x > 0){ return 1; }
        if(x < 0){ return -1; }
        return 0;
    }

};
