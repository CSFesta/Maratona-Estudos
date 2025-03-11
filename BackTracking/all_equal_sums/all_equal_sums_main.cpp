#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> allPerms;

void dfs(vector<int> &nums, vector<int> &cur_val, int target, int total, int i){
    if(total == target){
        allPerms.emplace_back(cur_val);
        return;
    }
    if(nums.size() == i || total > target){
        return;
    }

    cur_val.emplace_back(nums[i]);
    dfs(nums, cur_val, target, total + nums[i], i);
    cur_val.pop_back();
    dfs(nums, cur_val, target, total, i + 1);
}

int main(){
    vector<int> nums = {2,5,6,9};
    int target = 9;
    vector<int> cur_val;
    
    dfs(nums, cur_val, target, 0, 0);


    for(const auto &i : allPerms){
        for(const auto &j : i){
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}