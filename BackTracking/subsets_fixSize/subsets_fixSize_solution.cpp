/*
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:


vector<vector<int>> allPermutation;

void dfs(vector<int> &numbers, vector<int>& cur, vector<bool> &visited, int qnt_num){
    if(qnt_num == numbers.size()){
        allPermutation.push_back(cur);
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
    vector<vector<int>> permute(vector<int>& numbers) {
        vector<int> cur;
        vector<bool> visited(numbers.size(), false);
        dfs(numbers, cur, visited, 0);
        return allPermutation;
    }
};
*/