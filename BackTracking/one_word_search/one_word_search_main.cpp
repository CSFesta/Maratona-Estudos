#include <iostream> 
#include <vector>

using namespace std;

bool backtracking(vector<vector<char>> &matriz, string &word, int at, int i, int j){
    if(at == word.size()){
        return true;
    }
    
    int n = matriz.size();
    int m = matriz[0].size();
    
    if(i < 0 || j < 0 || i >= n || j >= m || word[at] != matriz[i][j]){
        return false;
    }
    
    char temp = matriz[i][j];
    matriz[i][j] = '#';
    at++;

    if( backtracking(matriz, word, at, i + 1, j) ||
        backtracking(matriz, word, at, i - 1, j) ||
        backtracking(matriz, word, at, i, j + 1) ||
        backtracking(matriz, word, at, i, j - 1)){
        return true;
    }

    matriz[i][j] = temp;
    at--;

    return false;
}

bool exist_word(vector<vector<char>> &matriz, string &word){
    int n = matriz.size();
    int m = matriz[0].size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if (backtracking(matriz, word, 0, i, j)){
                return true;
            }         
        }
    }
    return false;
}

int main(){
    vector<vector<char>> matriz = {
        {{'D'}, {'G'}, {'C'}},
        {{'D'}, {'E'}, {'F'}},
        {{'G'}, {'H'}, {'I'}}
    };
    string word = "DGHEFI";
    cout << exist_word(matriz, word) << "\n";
     
    return 0;
}