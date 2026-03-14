class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        long long newMass = mass;
        sort(asteroids.begin(), asteroids.end());
        for(int i = 0; i < asteroids.size(); i++){
            if( newMass >= asteroids[i]){
                newMass += asteroids[i];
            }else{
                return false;
            }
        }
        return true;
    }
};
