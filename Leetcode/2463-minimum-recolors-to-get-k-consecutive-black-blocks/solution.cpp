class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int minRecolor = 101;

        int left = 0, right = k - 1;

        while( right < blocks.size()){

            int w_cnt = 0;

            for(int i = left; i <= right; i++){

                if(blocks[i] == 'W'){
                    w_cnt++;
                }
            }

            if(minRecolor > w_cnt){
                minRecolor = w_cnt;
            }

            left++;
            right++;
        }

        return minRecolor;
    }
};
