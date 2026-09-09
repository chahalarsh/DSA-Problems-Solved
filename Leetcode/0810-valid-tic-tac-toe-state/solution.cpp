class Solution {
public:
    bool validTicTacToe(vector<string>& board) {
        int cntX = 0, cntO = 0;

        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[0].size(); j++){
                if( board[i][j] == 'X'){
                    cntX++;
                }else if( board[i][j] == 'O'){
                    cntO++;
                }
            }
        }        

        if( cntX == cntO || cntX == cntO + 1){

            bool Xwin = doesWin(board, 'X');
            bool Owin = doesWin(board, 'O');

            if( Xwin == true && Owin == true){
                return false;
            }

            if(Xwin == true && cntX == cntO){
                return false;
            }

            if(Owin == true && cntX == cntO + 1){
                return false;
            }

            return true;
        }
        
        return false;
    }

    bool doesWin(vector<string>& board, char c){
        if( ((board[0][0] == board[0][1]) && (board[0][0] == board[0][2]) && (board[0][0] == c)) ||
            ((board[1][0] == board[1][1]) && (board[1][0] == board[1][2]) && (board[1][0] == c)) ||
            ((board[2][0] == board[2][1]) && (board[2][0] == board[2][2]) && (board[2][0] == c)) ||
            ((board[0][0] == board[1][0]) && (board[0][0] == board[2][0]) && (board[0][0] == c)) ||
            ((board[0][1] == board[1][1]) && (board[0][1] == board[2][1]) && (board[0][1] == c)) ||
            ((board[0][2] == board[1][2]) && (board[0][2] == board[2][2]) && (board[0][2] == c)) ||
            ((board[0][0] == board[1][1]) && (board[0][0] == board[2][2]) && (board[0][0] == c)) ||
            ((board[0][2] == board[1][1]) && (board[0][2] == board[2][0]) && (board[0][2] == c)) 
        
        ){
            return true;
        }

        return false;
    }


};


