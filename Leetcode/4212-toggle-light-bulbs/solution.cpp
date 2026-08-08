class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {

        vector<bool> state(100, false);
        vector<int> ans;

        for(int bulb: bulbs){
            state[bulb - 1] = !state[bulb - 1];
        }
        for(int i = 0; i < 100; i++){
            if(state[i]){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};
