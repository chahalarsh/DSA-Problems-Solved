class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandies = 0;
        for(int i = 0; i < candies.size(); i++){
            if(candies[i] > maxCandies){
                maxCandies = candies[i];
            }
        }
        vector<bool> res;
        for(int i = 0; i < candies.size(); i++){
            res.push_back(candies[i] + extraCandies >= maxCandies ? true : false);
        }
        return res;
        
    }
};
