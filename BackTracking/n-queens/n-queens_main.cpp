#include <bits/stdc++.h>

using namespace std;

vector<vector<string>> valid_boards;
set<int> posD;
set<int> negD;
vector<bool> cols;

void backtrack(vector<vector<char>>&board, int row){
    if(row == board.size()){
        vector<string> str (board.size(), "");

        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board.size(); j++){
                str[i] += board[i][j];
            }
        }

        valid_boards.emplace_back(str);
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

int main(){
    int n = 4;
    vector<vector<char>> board (n, vector<char>(n, '.'));
    cols.resize(n);    
    backtrack(board, 0);
    for(auto & i : valid_boards){
        for(auto & j : i){
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}