/*
class Solution {
public:

    vector<vector<int>> allPerms;
    set<vector<int>> exist_perms;

    void dfs(vector<int> &nums, vector<int> &cur, vector<bool> &vis, int qnt_nums){
    if(qnt_nums == nums.size()){
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

            dfs(nums, cur, vis, qnt_nums + 1);

            vis[i] = false;
            cur.pop_back();
        }
    }
}


    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int> cur;
        vector<bool> vis(nums.size(), false);
        dfs(nums, cur, vis, 0);
        return allPerms;
    }
};
*/