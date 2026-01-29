class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int> members;
        vector<int> res;
        for(int num: nums){
            members[num]++;
            if(members[num] >= 2){
                res.push_back(num);
                if(res.size() == 2){
                    return res;
                }
            }
        }
        return res;
    }
};
