class Solution {
public:
    bool checkRecord(string s) {

        int n = s.size();

        int abs = 0;
        int late = 0;

        for(int i = 0; i < n; i++){
            if( s[i] == 'A'){
                abs++;
                if( abs >= 2){
                    return false;
                }
            }else if( s[i] == 'L'){
                if( late < 3){
                    late++;
                }
                if( late >= 3){
                    return false;
                }
                continue;
            }
            late = 0;
        } 
        return true;
    }
};
