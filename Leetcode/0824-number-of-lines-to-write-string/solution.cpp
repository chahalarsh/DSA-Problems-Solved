class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int lines = 0;
        int currLineWidth = 0;
        int maxWidth = 100;

        for(int i = 0; i < s.size(); i++){
            char c = s[i];
            int w = widths[c - 'a'];

            if( currLineWidth + w > maxWidth){
                lines++;
                currLineWidth = w;
            }else if(currLineWidth + w == maxWidth){
                if( i == s.size() - 1){
                    currLineWidth = 100;
                }else{
                    lines++;
                    currLineWidth = 0;
                }

            }else{
                currLineWidth += w;
            }


        }

        return {lines + 1, currLineWidth};
    }
};
