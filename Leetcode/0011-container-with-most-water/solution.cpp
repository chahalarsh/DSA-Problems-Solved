class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int ans = 0;

        while(left <= right){
            int tmp = min(height[left], height[right]);
            long long tmp2 = (tmp * (right - left)); 

            if(tmp2 >= ans){
                ans = tmp2;
            }
            
            if(tmp == height[left]){
                left++;
            }else{
                right--;
            }
        }
        
        return ans;
    }
};
