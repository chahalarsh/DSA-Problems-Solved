class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int t = n/3;
        unordered_map<int,int> freq;
        vector<int> res;
        for(int num: nums){
            freq[num]++; 

            if(freq[num] > t){

                if(res.size() == 1){
                    if(res[0] == num){
                        continue;
                    }
                }
                
                res.push_back(num);

                if(res.size() >= 2){
                    return res;
                }
            }
        }
        
        return res;
    }
};
