#include <iostream>
#include <vector>

using namespace std;

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


int main(){
    vector<vector<int>> graph = {{4,3,1},{3,2,4},{3},{4},{}};
    n = graph.size();
    vector<bool> vis(n, false);
    vector<int> cur;
    cur.push_back(0);
    vis[0] = true;
    backtrack(graph, vis, cur, 0);

    for(const auto &i : allDFS){
        for(const auto &j : i){
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}