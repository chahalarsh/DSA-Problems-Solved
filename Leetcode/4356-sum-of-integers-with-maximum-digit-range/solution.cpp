class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        vector<long long int> maxDigitRangeSum(10, 0);
        int maxDigitRange = 0;

        for (int num : nums) {

            int tmp = num;
            int minDigit = 9;
            int maxDigit = 0;

            while (num > 0) {

                int tmp2 = num % 10;
                num /= 10;

                if (tmp2 > maxDigit) {
                    maxDigit = tmp2;
                }
                if (tmp2 < minDigit) {
                    minDigit = tmp2;
                }
            }

            int digitRange = maxDigit - minDigit;
            if (digitRange > maxDigitRange) {
                maxDigitRange = digitRange;
            }
            maxDigitRangeSum[digitRange] += tmp;
        }
        return maxDigitRangeSum[maxDigitRange];
    }
};
