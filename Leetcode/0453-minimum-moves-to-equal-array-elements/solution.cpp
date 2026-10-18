class Solution {
public:
    int minMoves(vector<int>& nums) {
        long long sum = accumulate(nums.begin(), nums.end(),0LL);
        long long minEle = *min_element(nums.begin(),nums.end());
        return sum - nums.size() * minEle;
    }
};
