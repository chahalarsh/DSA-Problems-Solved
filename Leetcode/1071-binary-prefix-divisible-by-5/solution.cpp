class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> res;
        int tmp = 0;
        for(int bit: nums){
            tmp = (tmp * 2 + bit) % 5;
            res.push_back(tmp == 0);
        }
        return res;
    }
};
