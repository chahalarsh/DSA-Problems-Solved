class Solution {
public:
    int calPoints(vector<string>& operations) {

        vector<int> score;
        int res = 0;

        for(int i = 0; i < operations.size(); i++){

            if(operations[i] == "C"){
                score.pop_back();
            }else if( operations[i] == "D"){
                int tmp = score[ score.size() - 1];
                score.push_back(tmp*2);
            }else if( operations[i] == "+"){
                int tmp = score[ score.size() - 1];
                int tmp2 = score[ score.size() - 2];

                score.push_back(tmp + tmp2);
            }else{
                score.push_back(stoi(operations[i]));
            }
        }
        for(int num: score){
            res += num;
        }
        return res;
    }
};
