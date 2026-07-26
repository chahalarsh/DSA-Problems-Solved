class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int totalKm = 0;

        while(mainTank){
            if(mainTank - 5 >= 0){
                mainTank -= 5;
                if(additionalTank > 0){
                    additionalTank -= 1;
                    mainTank += 1;
                }
                totalKm += 50;
            }else{
                totalKm += mainTank * 10;
                return totalKm;
            }
        }
        return totalKm;
    }
};
