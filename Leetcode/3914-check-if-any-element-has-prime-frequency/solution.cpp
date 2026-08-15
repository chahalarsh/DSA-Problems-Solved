class Solution {
public:
    bool checkPrimeFrequency(vector<int>& nums) {

        unordered_map<int,int> Freq;
        
        for(int num: nums){
            Freq[num]++;
        }

        for(const auto& [key, value]: Freq ){
            if( isPrime(value)){
                return true;
            }
        }
        return false;
    }
    bool isPrime( int num){

        if(num <= 1) return false;
        if(num == 2) return true;

        if( num % 2 == 0){
            return false;
        }

        int tmp = sqrt(num);
        for(int i = 3; i <= tmp; i++){
            if( num % i == 0){
                return false;
            }
        }
        return true;
    }
};
