/*
class Solution {
    public:
    
        int ans = 0;
        set<int> posD;
        set<int> negD;
        vector<bool> cols;
    
        void backtrack(vector<vector<char>>&board, int row){
            if(row == board.size()){
                ans++;
                return;
            }
            
            for(int col = 0; col < board.size(); col++){
                if(cols[col] || posD.count(row + col) || negD.count(row - col)){
                    continue;
                }
                cols[col] = true;
                posD.insert(row + col);
                negD.insert(row - col);
                board[row][col] = 'Q';
    
                backtrack(board, row + 1);
    
                cols[col] = false;
                posD.erase(row + col);
                negD.erase(row - col);
                board[row][col] = '.';
            }
        }
    
        int totalNQueens(int n) {
            vector<vector<char>> board (n, vector<char>(n, '.'));
            cols.resize(n);    
            backtrack(board, 0);
            return ans;
        }
    };
*/