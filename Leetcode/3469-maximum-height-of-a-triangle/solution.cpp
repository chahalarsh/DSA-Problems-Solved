class Solution {
public:
    int maxHeightOfTriangle(int red, int blue) {

        int tred = red;
        int tblu = blue;

        int startRedHeight = 0;
        for(int i = 1; i <= red + blue; i += 2){
            if(tred - i >= 0){
                tred -= i;
                startRedHeight++;
            }else{
                break;
            }
            if(tblu - (i+1) >= 0){
                tblu -= (i+1);
                startRedHeight++;
            }else{
                break;
            }
        }

        tred = red;
        tblu = blue;

        int startBlueHeight = 0;

        for(int i = 1; i <= red + blue; i += 2){
            if(tblu - i >= 0){
                tblu -= i;
                startBlueHeight++;
            }else{
                break;
            }
            if(tred - (i+1) >= 0 ){
                tred -= (i+1);
                startBlueHeight++;
            }else{
                break;
            }
        }



        return max(startRedHeight,startBlueHeight);
    }
};
