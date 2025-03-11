/*
class Solution {
public:

    
    vector<string> all_words;
    set<string> exist_words;


    struct TrieNode {
        vector<TrieNode*> children;
        bool isEndOfWord;
        TrieNode() : children(26, nullptr), isEndOfWord(false) {}
    };

    struct Trie {
        TrieNode* root;
        Trie() { root = new TrieNode(); }

        void insert(const string& word) {
            TrieNode* node = root;
            for (char ch : word) {
                int index = ch - 'a';
                if (!node->children[index]) node->children[index] = new TrieNode();
                node = node->children[index];
            }
            node->isEndOfWord = true;
        }

        bool search(const string& word) {
            TrieNode* node = root;
            for (char ch : word) {
                int index = ch - 'a';
                if (!node->children[index]) return false;
                node = node->children[index];
            }
            return node->isEndOfWord;
        }

        bool startsWith(const string& prefix) {
            TrieNode* node = root;
            for (char ch : prefix) {
                int index = ch - 'a';
                if (!node->children[index]) return false;
                node = node->children[index];
            }
            return true;
        }
    };
    
    void backtrack(vector<vector<char>> &board, vector<vector<bool>> &vis, Trie trie, string &cur, int i, int j){
        int n = board.size();
        int m = board[0].size();
        if(i < 0 || j < 0 || i >= n || j >= m || vis[i][j] || !trie.startsWith(cur)){
            return;
        }

        vis[i][j] = true;
        cur.push_back(board[i][j]);

        if(trie.search(cur)){
            if(!exist_words.count(cur)){
                exist_words.insert(cur);
                all_words.emplace_back(cur);
            }
        }
        

        if(cur.size() == 1){

        }

        backtrack(board, vis, trie, cur, i + 1, j);
        backtrack(board, vis, trie, cur, i - 1, j);
        backtrack(board, vis, trie, cur, i, j + 1);
        backtrack(board, vis, trie, cur, i, j - 1);

        vis[i][j] = false;
        cur.pop_back();
    }

    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        Trie trie;
        for(const auto &i : words){
            trie.insert(i);
        }
        int n = board.size();
        int m = board[0].size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                vector<vector<bool>> vis(board.size(), vector<bool>(board[0].size(), false));
                string str = "";
                backtrack(board, vis, trie, str, i, j);
            }
        }
        return all_words;
    }
};

*/