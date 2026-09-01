class Solution {
public:
    int maxVowels(string s, int k) {
        
        int maxVowel = 0;
        int tmp = 0;
        int j = 0;
        for(int i = 0; i < k; i++){
            if( isVowel(s[i])){
                tmp++;
                maxVowel++;
            }
        }
        for(int i = k ; i < s.size(); i++){
            if( isVowel(s[i])){
                tmp++;
            }
            if( isVowel(s[j++])){
                tmp--;
            }
            maxVowel = max( maxVowel, tmp);
        }
        return maxVowel;
    }
    bool isVowel(char c){
        if( 
            
            c == 'a' ||
            c == 'e' ||
            c == 'i' ||
            c == 'o' ||
            c == 'u' 
            
            ){
                return true;
            }
        return false;
    }
};
