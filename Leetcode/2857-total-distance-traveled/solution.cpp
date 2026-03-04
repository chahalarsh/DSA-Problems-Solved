class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int res = 0;

        while(mainTank){
            if( mainTank >= 5){
                mainTank -= 5;
                if( additionalTank >= 1){
                    additionalTank -= 1;
                    mainTank += 1;
                }
                res += 50;
                
            }else{
                res += mainTank * 10; 
                return res;
            }
        }
        return res;
    }
};
