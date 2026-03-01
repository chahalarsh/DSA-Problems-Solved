class Solution {
public:
    int minPartitions(string n) {
        int maxDig = 0;
        for(char c: n){
            int t = c - '0';
            maxDig = max(maxDig, t);
        }
        return maxDig;
    }
};
