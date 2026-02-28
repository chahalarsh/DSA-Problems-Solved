class Solution {
public:
    int findFinalValue(vector<int>& nums, int org) {
        unordered_set s(nums.begin(),nums.end());
        while(s.count(org)){
            org *= 2;
        }
        return org;
    }
};
