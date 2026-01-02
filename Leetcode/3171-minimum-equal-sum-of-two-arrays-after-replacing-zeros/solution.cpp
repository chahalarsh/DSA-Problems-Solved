class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {

        int nums1Pos = -1;
        int nums2Pos = -1;

        for(int i = 0; i < nums1.size(); i++){
            if(nums1[i] == 0){
                nums1[i] = 1;
                nums1Pos = i;
            }
        }
        for(int i = 0; i < nums2.size(); i++){
            if(nums2[i] == 0){
                nums2[i] = 1;
                nums2Pos = i;
            }
        }

        long long sum1 = 0;
        long long sum2 = 0;

        for(int num: nums1){
            sum1 += num;
        }
        for(int num: nums2){
            sum2 += num;
        }
        
        long long diff = sum1 - sum2;

        if(diff == 0){
            return sum1;
        }else if(nums1Pos == -1 && nums2Pos == -1){
            return -1;
        }

        if( diff < 0 && nums1Pos == -1){
            return -1;
        }
        if(diff > 0 && nums2Pos == -1){
            return -1;
        }

        if(diff < 0){
            nums1[nums1Pos] = diff;
            return sum1 + abs(diff);
        }else{
            nums2[nums2Pos] = diff;
            return sum2 + abs(diff);
        }
        
        return -1;
    }
};
