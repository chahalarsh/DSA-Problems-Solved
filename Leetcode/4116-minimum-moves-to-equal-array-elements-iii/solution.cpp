class Solution {
public:
    int minMoves(vector<int>& nums) {

        int max = 0;
        for(int num: nums){
            if(num > max){
                max = num;
            }
        }

        int res = 0;

        for(int num: nums){
            res += (max - num);
        }

        return res;
        
    }
};
