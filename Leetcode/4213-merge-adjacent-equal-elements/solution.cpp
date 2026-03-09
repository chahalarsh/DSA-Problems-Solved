class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        vector<long long> res; 
        
        for( long long x: nums){
            res.push_back(x);

            while( res.size() > 1 && res.back() == res[res.size() - 2]){
                long long v = res.back();
                res.pop_back();
                res.back() += v;
            }
        }
        return res;
    }
};
