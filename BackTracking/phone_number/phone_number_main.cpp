#include <bits/stdc++.h>

using namespace std;

const unordered_map<char, string> my_map = {
    {'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"},
    {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}
};

vector<string> allPerms;
unordered_set<string> existPerms;

void dfs(string &digits, vector<bool> &vis, int atual, string cur){
    if(cur.size() == digits.size()){
        if(!existPerms.count(cur)){
            existPerms.insert(cur);
            allPerms.emplace_back(cur);
        }

    } 
    if (atual == digits.size()){
        return;
    }
    for(int i = 0; i < digits.size(); i++){
        if(!vis[i]){
            vis[i] = true;
            char at = digits[atual];
            string cur_digits = my_map.at(at);
            for(const auto &j : cur_digits){
                dfs(digits, vis, atual + 1, cur + j);
            }
            vis[i] = false;
        }
    }
}

int main(){
    
    string digits = "34";
    vector<bool> vis(digits.size());
    dfs(digits, vis, 0, "");
    cout << "[";
    for(int i = 0; i < allPerms.size(); i++){
        cout << allPerms[i];
        if (i != allPerms.size()-1) cout << ", ";
    }
    cout << "]" << "\n";
    return 0;
}