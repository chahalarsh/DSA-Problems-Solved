class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> arr;
        int startnum = -(n/2);
        int sum = 0;

        for(int i = 0; i < n; i++){
            arr.push_back(startnum);
            sum += startnum;
            startnum++;
        }
        if(arr.size() % 2 == 0){
            erase(arr, 0);
            arr.push_back(startnum);
        }
        return arr;
    }
};
