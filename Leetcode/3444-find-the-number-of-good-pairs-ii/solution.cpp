class Solution {
public:
    long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {

        unordered_map<int, int> freq;
        long long res = 0;

        for(int num: nums2){
            freq[num]++;
        }
        
        for(int num: nums1){
            if( num % k != 0){
                continue;
            }

            int t = num /k;

            for(int d = 1; (long long)d * d <= t; d++){
                if(t % d == 0){
                    if(freq.count(d)){
                        res += freq[d];
                    }

                    int other = t /d;
                    if(other != d && freq.count(other)){
                        res += freq[other];
                    }
                }
            }

        }
        return res;
    }
};
