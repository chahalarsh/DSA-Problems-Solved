class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {

        string res = "Pending";

        string turnOf = "X";

        vector<vector<string>> grid =
        { {"", "", ""},
          {"", "", ""},
          {"", "", ""} };

        for (int i = 0; i < moves.size(); i++) {

            grid[moves[i][0]][moves[i][1]] = turnOf;

            if (i >= 2) {
                int tmp = 2;
                
                    string tmp2 = turnOf;

                    if(
                        (
                        grid[0][0] == tmp2 &&
                        grid[0][1] == tmp2 &&
                        grid[0][2] == tmp2 
                        )
                        ||
                        (
                        grid[1][0] == tmp2 &&
                        grid[1][1] == tmp2 &&
                        grid[1][2] == tmp2 
                        )
                        ||
                        (
                        grid[2][0] == tmp2 &&
                        grid[2][1] == tmp2 &&
                        grid[2][2] == tmp2 
                        )
                        ||
                        (
                        grid[0][0] == tmp2 &&
                        grid[1][0] == tmp2 &&
                        grid[2][0] == tmp2 
                        )
                        ||
                        (
                        grid[0][1] == tmp2 &&
                        grid[1][1] == tmp2 &&
                        grid[2][1] == tmp2 
                        )
                        ||
                        (
                        grid[0][2] == tmp2 &&
                        grid[1][2] == tmp2 &&
                        grid[2][2] == tmp2 
                        )
                        ||
                        (
                        grid[0][0] == tmp2 &&
                        grid[1][1] == tmp2 &&
                        grid[2][2] == tmp2 
                        )
                        ||
                        (
                        grid[0][2] == tmp2 &&
                        grid[1][1] == tmp2 &&
                        grid[2][0] == tmp2 
                        )
                    ){
                        return tmp2 == "X" ? "A" : "B";
                    }
            }

            if (turnOf == "X") {
                turnOf = "O";
            } else {
                turnOf = "X";
            }

            if(i == 8){
                return "Draw";
            }
        }

        return res;
    }
};
