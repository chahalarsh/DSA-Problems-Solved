class Solution {
public:
    int maxProfit(vector<int>& prices){
        int minimum = 99999;
        int maximum = 0;
        for(int price: prices){
            if(price < minimum){
                minimum = price;
            }
            else{
                maximum = max(maximum, price - minimum);
            }

        }
        return maximum;
    }
};
