/*
class Solution {
    public:
    
        vector<vector<int>> allPerms;
        set<vector<int>> existPerms;
    
        vector<vector<int>> subsets(vector<int>& nums) {
            vector<bool> vis(nums.size(), false);
            vector<int> cur;
            sort(nums.begin(), nums.end());
            dfs(nums, vis, cur);
            return allPerms;
        }
    
        
    
    
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
    };
*/  