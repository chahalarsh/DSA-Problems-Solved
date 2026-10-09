class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        vector<int> cnt(3);
        int t = 0;

        for(int i = 0; i < n; i++){
            cnt[nums[i]]++; 
        }
        for(int i = 0; i < n; i++){
            while(cnt[t] == 0 && t < 3){
                t++;
            }
            nums[i] = t;
            cnt[t]--;
        }
        
    }
}; 
