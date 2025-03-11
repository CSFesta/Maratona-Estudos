#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> allPerms;
set<vector<int>> exist_perms;

void dfs(vector<int> &nums, vector<int> &cur, vector<bool> &vis){
    if(cur.size() == nums.size()){
        if(exist_perms.count(cur) == 0){
            exist_perms.insert(cur);
            allPerms.emplace_back(cur);
        }
        return;
    }

    for(int i = 0; i < nums.size(); i++){
        if(!vis[i]){

            vis[i] = true;
            cur.emplace_back(nums[i]);

            dfs(nums, cur, vis);

            vis[i] = false;
            cur.pop_back();
        }
    }
}

int main(){
    vector<int> nums = {2, 1, 2};
    vector<int> cur;
    vector<bool> vis(nums.size(), false);
    dfs(nums, cur, vis);
    for(const auto &i : allPerms){
        cout << "[ ";
        for(const auto &j : i){
            cout << j << " ";
        }
        cout << "]";
    }
    return 0;
}