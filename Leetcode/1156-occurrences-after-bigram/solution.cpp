class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> res;

        string ref = first + ' ' + second + ' ';
        int s = ref.size();

        for(int i = 0; i < text.size() - s; i++){

            if(i == 1){
                ref = ' ' + ref;
                s++;
            }

            if(text.substr(i, s) == ref){
                int j = i + s;
                int s2 = 0;
                while( j < text.size() && (text[j] != ' ' || j == text.size() - 1)){
                    s2++;
                    j++;
                }
                res.push_back(text.substr(i+s, s2));
            }
        }
        return res;
    }
};
