/*
class Solution {
public:

    vector<vector<int>> allSums;
    set<vector<int>> existSums; 

    void backtrack(vector<int> &candidates, int target, vector<int> &cur_vals, vector<bool> &vis, int total){

        if(target == total){
            vector<int> temp = cur_vals;
            sort(temp.begin(), temp.end());
            if(existSums.count(temp)){
                return;
            }
            existSums.emplace(temp);
            allSums.emplace_back(temp);
            return;
        }

        if(total > target){
            return;
        }

        for(int i = 0; i < candidates.size(); i++){
            if(!vis[i]){
                vis[i] = true;
                cur_vals.emplace_back(candidates[i]);

                backtrack(candidates, target, cur_vals, vis, total + candidates[i]);

                vis[i] = false;
                cur_vals.pop_back();
                
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> cur_vals;
        vector<bool> vis(candidates.size());
        backtrack(candidates, target, cur_vals, vis, 0);        
        return allSums;
    }
};
*/