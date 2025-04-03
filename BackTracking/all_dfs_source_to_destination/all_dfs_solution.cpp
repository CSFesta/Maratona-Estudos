/*
class Solution {
public:


    int n;
    vector<vector<int>> allDFS;
    void backtrack(vector<vector<int>> &graph, vector<bool> &vis, vector<int> &cur, int atual){
        
        
        if(atual == n - 1){
            allDFS.emplace_back(cur);
            return;
        }
        for(int i = 0; i < graph[atual].size(); i++){
            if(!vis[graph[atual][i]]){
                
                cur.push_back(graph[atual][i]);
                vis[graph[atual][i]] = true;
                backtrack(graph, vis, cur, graph[atual][i]);            
                vis[graph[atual][i]] = false;
                cur.pop_back();
            }
        }
    }   

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        n = graph.size();
        vector<bool> vis(n, false);
        vector<int> cur;
        cur.push_back(0);
        vis[0] = true;
        backtrack(graph, vis, cur, 0);
        return allDFS;

    }
};
*/