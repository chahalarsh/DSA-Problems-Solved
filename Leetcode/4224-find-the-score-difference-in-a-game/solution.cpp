class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        long long pl1 = 0;
        long long pl2 = 0;

        bool pl1Active = true;


        for(int i = 0; i < nums.size(); i++){
            if( nums[i] % 2 != 0){
                pl1Active = !pl1Active;
            }
            if( i % 6 == 5){
                pl1Active = !pl1Active;
            }

            if(pl1Active){
                pl1 += nums[i];
            }else{
                pl2 += nums[i];
            }

        }
        return pl1 - pl2;
    }
};
