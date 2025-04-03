#include <iostream>
#include <vector> 

using namespace std;

int n;
int m;
int qnt_zeros = 0;
int ans = 0;

void backtrack(vector<vector<int>> &matrix, int i, int j, int contador){
    if(i < 0 || j < 0 || i >= n || j >= m || matrix[i][j] == -1){
        return;
    }

    if(matrix[i][j] == 2){
        if(contador == qnt_zeros + 1){
            ans++;
        }
        return;
    }
    matrix[i][j] = -1;

    backtrack(matrix, i + 1, j, contador + 1);
    backtrack(matrix, i - 1, j, contador + 1);
    backtrack(matrix, i, j + 1, contador + 1);
    backtrack(matrix, i, j - 1, contador + 1);

    matrix[i][j] = 0;
}

int main(){
    // 1 == source, 0 == clear, 2 == destination, -1 == block
    vector<vector<int>> matrix {{1,0,0,0},{0,0,0,0},{0,0,2,-1}};
    int start_x;
    int start_y;
    
    n = matrix.size();
    m = matrix[0].size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(matrix[i][j] == 1){
                start_x = i;
                start_y = j;
            }
            else if(matrix[i][j] == 0) qnt_zeros++;
        }
    }

    backtrack(matrix, start_x, start_y, 0);
    cout << ans << "\n";
    return 0;
}