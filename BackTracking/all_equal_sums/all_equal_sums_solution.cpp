/*
class Solution {
public:
    vector<vector<int>> allPerms;

    void dfs(vector<int> &nums, vector<int> &cur, int target, int total, int i){
        if(total == target){
            allPerms.emplace_back(cur);
            return;
        }
        if(total > target || i == nums.size()){
            return;
        }
        cur.emplace_back(nums[i]);
        dfs(nums, cur, target, total + nums[i], i);
        cur.pop_back();
        dfs(nums, cur, target, total, i + 1);
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> cur;
        dfs(nums, cur, target, 0, 0);
        return allPerms;
    }
};

*/