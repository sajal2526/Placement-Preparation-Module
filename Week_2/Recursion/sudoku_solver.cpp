class Solution {
public:
    
    bool isSafe(vector<vector<char>>& board, int row, int col, char num) {
        
        for (int i = 0; i < 9; i++) {
            if (board[row][i] == num) return false;
        }
        
        for (int i = 0; i < 9; i++) {
            if (board[i][col] == num) return false;
        }
        
        int r_Start = row - row%3, c_Start = col - col%3;
        
        for (int i = r_Start; i < r_Start+3; i++) {
            for (int j = c_Start; j < c_Start+3; j++) {
                if (board[i][j] == num) return false;
            }
        }
        return true;
    }
    bool solve(vector<vector<char>>& board) 
    {
         int row=-1,col=-1;
        bool empty=true;
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') {
                    row = i;
                    col = j;
                    empty = false;
                    break;
                }
            }
            
            if (empty == false) break;
        }
        if(empty==true) return true;
        for(char k='1';k<='9';k++)
        {
            if(isSafe(board,row,col,k))
            {
                board[row][col]=k;
                if(solve(board)==true)
                    return true;
                else
                    board[row][col]='.';
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
         solve(board);
       
            
    }
};