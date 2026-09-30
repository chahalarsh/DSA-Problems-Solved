class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {

        vector<int> less;
        vector<int> equal;
        vector<int> more;

        for(int num: nums){
            if( num < pivot){
                less.emplace_back(num);
            }else if( num == pivot){
                equal.emplace_back(num);
            }else{
                more.emplace_back(num);
            }
        }

        vector<int> ans;
        
        ans.reserve(nums.size());

        ans.insert(ans.end(), less.begin(), less.end());
        ans.insert(ans.end(), equal.begin(), equal.end());
        ans.insert(ans.end(), more.begin(), more.end());

        return ans;
    }
};
