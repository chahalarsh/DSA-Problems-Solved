class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        array<vector<pair<string*, int>>, 26> waiting;

        for (auto& word : words)
            waiting[word[0] - 'a'].push_back({&word, 0});

        int res = 0;

        for (char c : s) {
            auto bucket = move(waiting[c - 'a']);
            waiting[c - 'a'].clear();

            for (auto& [word, j] : bucket) {
                j++;  
                if (j == word->size()) {
                    res++; 
                } else {
                    waiting[(*word)[j] - 'a'].push_back({word, j});  
                }
            }
        }

        return res;
    }
};

