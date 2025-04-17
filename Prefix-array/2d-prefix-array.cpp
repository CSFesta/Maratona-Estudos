#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <limits>
using namespace std;

vector<vector<int>> compute_prefix(vector<vector<int>> &numbers, int n, int m){
    vector<vector<int>> prefix(n + 1, vector<int>(m + 1, 0));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            prefix[i][j] = prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1] + numbers[i-1][j-1];
        }
    }
    return prefix;
}

int query(const vector<vector<int>> &prefix, int x1, int y1, int x2, int y2) {
    return prefix[x2][y2] - prefix[x1 - 1][y2] - prefix[x2][y1 - 1] + prefix[x1 - 1][y1 - 1];
}

int main(){
    vector<vector<int>> numbers = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    int n, m;
    n = numbers.size();
    m = numbers[0].size();
    vector<vector<int>> prefix = compute_prefix(numbers, n, m);

    int x1 = 1, y1 = 2, x2 = 3, y2 = 3;
    int soma = query(prefix, x1, y1, x2, y2);
    cout << "\nSoma da submatriz de (" << x1 << "," << y1 << ") ate (" << x2 << "," << y2 << ") = " << soma << "\n";

    return 0;
}
