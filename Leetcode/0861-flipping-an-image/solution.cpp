class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i = 0; i < image.size(); i++){
            for(int j = 0; j < (image[0].size() + 1) / 2; j++){
                int tmp = image[i][j] ^ 1;
                image[i][j] = image[i][image[0].size() -j - 1] ^ 1;
                image[i][image[0].size() -j - 1] = tmp;                
            }
        }
        
        return image;
    }
};
