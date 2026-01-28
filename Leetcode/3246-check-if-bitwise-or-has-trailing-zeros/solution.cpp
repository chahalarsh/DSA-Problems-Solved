class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int evnCount = 0;
        for(int num: nums){
            if(num % 2 == 0){
                evnCount++;
                if(evnCount >= 2){
                    return true;
                }
            }
        }
        return false;
    }
};
