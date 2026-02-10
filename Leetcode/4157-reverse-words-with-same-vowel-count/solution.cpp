class Solution {
public:
    string reverseWords(string s) {
        int vowelCnt = 0;

        int i = 0;
        while( i < s.size() && s[i] != ' '){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                vowelCnt++;
            }
            i++;
        }

        for(int j = i; j < s.size(); j++){

            int k = j;
            int currVowel = 0;

            while(k < s.size() && (s[k] != ' ' || k == s.size() - 1)){
                if(s[k] == 'a' || s[k] == 'e' || s[k] == 'i' || s[k] == 'o' || s[k] == 'u'){
                    currVowel++;
                }
                k++;
            }

            if( currVowel == vowelCnt){
                reverse(s.begin() + j, s.begin() + k);
            }

            j = k;

        }
        return s;        
    }
};
