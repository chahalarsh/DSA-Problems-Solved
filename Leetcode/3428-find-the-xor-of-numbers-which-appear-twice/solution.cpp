class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map <int, int> map;
        int res = 0;
        for(int num: nums){
            if( map[num]){
                res ^= num;
            }
            map[num]++;
        }
        return res;
    }
};
