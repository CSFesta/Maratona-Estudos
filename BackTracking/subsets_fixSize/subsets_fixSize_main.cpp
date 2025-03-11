#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> allPermutation;

void printAllPermutations() {
    for (const auto& q : allPermutation) {
        cout << "[ ";
        for(const auto& j : q){
            cout << j << " ";
        }        
        cout << "]\n";
    }
}

void dfs(vector<int> &numbers, vector<int>& cur, vector<bool> &visited, int qnt_num){
    if(qnt_num == numbers.size()){
        allPermutation.emplace_back(cur);
        return;
    }

    for(int i = 0; i < numbers.size(); i++){
        if(!visited[i]){
            visited[i] = true;
            cur.emplace_back(numbers[i]);

            dfs(numbers, cur, visited, qnt_num + 1);

            visited[i] = false;  
            cur.pop_back();
        }
    }
}

int main(){
    vector<int> numbers = {1, 2, 3};
    vector<int> cur;
    vector<bool> visited(numbers.size(), false);
    dfs(numbers, cur, visited, 0);
    printAllPermutations();
    return 0;
}
