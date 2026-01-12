class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0;
        int n = arr.size();
        for(int i = 0; i < n; i++){
            int total = (i + 1) * (n - i);
            int oddCount = (total + 1)/2;
            sum += arr[i] * oddCount;
        }
        return sum;        
    }
};
