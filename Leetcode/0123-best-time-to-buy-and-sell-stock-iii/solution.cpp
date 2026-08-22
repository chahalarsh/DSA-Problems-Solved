class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy1 = INT_MAX;
        int prof1 = INT_MIN;

        int buy2 = INT_MAX;
        int prof2 = INT_MIN;


        for(int i = 0; i < prices.size(); i++){
            buy1 = min( buy1, prices[i]);
            prof1 = max( prof1, prices[i] - buy1);
            buy2 = min( buy2, prices[i] - prof1);
            prof2 = max( prof2, prices[i] - buy2);

        }
        
        return  prof2;
    }
};
