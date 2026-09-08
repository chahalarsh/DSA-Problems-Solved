class Solution {
public:
    double angleClock(int hour, int minutes) {
        double t = (hour * 5) + ((minutes/60.0) * 5.0);
        if(t >= 60.0){
            t -= 60.0;
        }
        t = abs( t - minutes) * 6;

        if( t >= 180){
            t = 360 - t;
        }

        return t;
    }
};
