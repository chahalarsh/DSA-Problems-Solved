class Solution {
public:
    vector<double> sampleStats(vector<int>& count) {
        int minEle = 256;
        int maxEle = 0;
        int mode = 0;

        long long total = 0;
        long long sum = 0;

        for (int i = 0; i < 256; i++) {
            if (count[i] > 0) {
                minEle = min(minEle, i);
                maxEle = max(maxEle, i);
            }

            if (count[i] > count[mode]) {
                mode = i;
            }

            total += count[i];
            sum += 1LL * count[i] * i;
        }

        double mean = (double)sum / total;

        long long mid1 = (total - 1) / 2;
        long long mid2 = total / 2;

        long long cumulative = 0;
        int median1 = 0, median2 = 0;

        for (int i = 0; i < 256; i++) {
            cumulative += count[i];

            if (cumulative > mid1 && median1 == 0) {
                median1 = i;
            }

            if (cumulative > mid2) {
                median2 = i;
                break;
            }
        }

        double median = (median1 + median2) / 2.0;

        return {
            (double)minEle,
            (double)maxEle,
            mean,
            median,
            (double)mode
        };
    }
};
