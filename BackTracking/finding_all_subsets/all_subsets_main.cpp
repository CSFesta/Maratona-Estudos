#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> allPerms;
set<vector<int>> existPerms;

void dfs(vector<int> &num, vector<bool> &vis, vector<int> &cur){
    vector<int> temp = cur;
    sort(temp.begin(), temp.end());
    if(existPerms.count(temp) == 0){
        allPerms.emplace_back(cur);    
        existPerms.insert(temp);
    }    
   
    for(int i = 0; i < num.size(); i++){
        if(!vis[i]){
            vis[i] = true;
            cur.emplace_back(num[i]);

            dfs(num, vis, cur);

            vis[i] = false;
            cur.pop_back();
        }
    }
}

int main(){
    vector<int> num = {1, 2, 3};
    vector<bool> vis(num.size(), false);
    vector<int> cur;
    sort(num.begin(), num.end());
    dfs(num, vis, cur);
    for(auto i : allPerms){
        cout << "[ ";
        for(auto j : i){
            cout << j << " ";
        }
        cout << "]\n";
    }
    return 0;
}