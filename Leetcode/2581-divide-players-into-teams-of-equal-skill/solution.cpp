class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        if( skill.size() == 2){
            return skill[0] * skill[1];
        }
        sort(skill.begin(), skill.end());
        int n = skill.size();
        long long chem = 0;
        int teamSum = skill[0] + skill[n - 1];


        for(int i = 0; i < n/ 2; i++){
            if( skill[i] + skill[n - i - 1] == teamSum){
                chem += skill[i] * skill[n - i - 1];
            }else{
                return -1;
            }
        }
        return chem;

    }
};
