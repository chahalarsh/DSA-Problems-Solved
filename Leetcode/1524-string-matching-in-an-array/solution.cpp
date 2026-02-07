class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {

        vector<string> res;

        for(int i = 0; i < words.size(); i++){

            string str = words[i];
            
            for(int j = 0; j < words.size(); j++){

                if(i == j){
                    continue;
                }

                size_t  foundPos = words[j].find(str);
                if(foundPos != string::npos){
                    res.push_back(str);
                    break; 
                }
            }
        }

        return res;
    }
};
