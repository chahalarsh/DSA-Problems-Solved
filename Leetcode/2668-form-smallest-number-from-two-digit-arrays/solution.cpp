class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {

        int min_n1 = 10, min_n2 = 10, min_cmn = 10;

        for(int t: nums1){
            if( t < min_n1){
                min_n1 = t;
            }
        }
        for(int t: nums2){
            if( t < min_n2){
                min_n2 = t;
            }
        }

        for(int i = 0; i < nums1.size(); i++){
            for(int j = 0; j < nums2.size(); j++){
                if(nums1[i] == nums2[j]){
                    if( nums1[i] < min_cmn){
                        min_cmn = nums1[i];
                    }
                }
            }
        }

        if( min_cmn != 10){
            return min_cmn;
        }
        
        if( min_n1 < min_n2){
            return (min_n1 * 10) + min_n2;
        }else if( min_n1 > min_n2){
            return (min_n2 * 10) + min_n1;
        }
        return min_n1;
    }
};
