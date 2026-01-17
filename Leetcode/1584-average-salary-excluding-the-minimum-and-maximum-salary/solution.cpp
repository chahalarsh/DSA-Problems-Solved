class Solution {
public:
    double average(vector<int>& salary) {
        int maxSal = 0;
        int minSal = INT_MAX;
        long long sum = 0;

        for(int s: salary){
            maxSal = max(maxSal, s);
            minSal = min(minSal, s);
            sum += s;
        }
        sum -= maxSal; sum -= minSal;
        return (double) sum/(salary.size() - 2);
    }
};
