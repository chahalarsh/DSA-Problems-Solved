class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {

        unordered_set<string> st;
        int cnt = 0;

        for( auto s: bannedWords){
            st.insert(s);
        }
        for(int i = 0; i < message.size(); i++){    

            if( st.find(message[i]) != st.end()){
                cnt++;
            }
            if( cnt >= 2){
                return true;
            }
        }
        
        return false;
    }
};
